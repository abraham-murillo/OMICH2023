#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for (auto i = (l) - ((l) > (r)); i != (r) - ((l) > (r)); i += 1 - 2 * ((l) > (r)))
#define sz(x) int(x.size())
#define all(x) begin(x), end(x)
#define f first
#define s second
#define pb push_back

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ld = long double;
using lli = long long;
using ii = pair<int, int>;

const int N = 1e5 + 5;
bool vis[N];

// n/2 + n/3 + n/5 + n/7 + ...
// n/4 + n/6 + n/8 + ...

void criba(int n) {
  // O(n logn)
  fill(vis, vis + N, true);
  vis[0] = vis[1] = false;
  for (int i = 2; i <= n; i++) { // O(n)
    if (vis[i]) {
      for (int j = 2; 1LL * i * j <= n; j++) { // O(logn)
        vis[i * j] = false;
      }
    }
  }
}

bool esPrimo(int p) {
  return vis[p]; // O(1)
}

vector<int> primes;

void getPrimes(int n) {
  // O(n) -> O(n/2)
  primes.push_back(2);
  for (int i = 3; i <= n; i += 2)
    if (esPrimo(i)) {
      primes.push_back(i);
    }
}

vector<int> divisores[N];

void cribaDivisores(int n) {
  // O(n logn)
  for (int i = 1; i <= n; i++) {
    divisores[i].push_back(1);
  }
  for (int i = 2; i <= n; i++) { // O(n)
    for (int j = 1; lli(i) * j <= n; j++) { // O(logn)
      // i es el divisor
      // i*j es el múltiplo
      divisores[i * j].push_back(i);
    }
  }
}

vector<int> factorizar(int n) {
  vector<int> f;
  for (int p : primes) {
    if (n % p == 0) {
      while (n % p == 0) {
        n /= p;
        f.push_back(p);
      }
    }
    if (n == 1 || n < p) {
      break;
    }
  }
  if (n != 1) {
    debug("No sé qué eres, pero pa' mi eres primo", n);
    f.push_back(n);
  }
  return f;
}

int fac[N];

void cribaFactorizacion(int n) {
  // O(n logn)
  fill(fac, fac + N, -1);
  fac[1] = 1;
  for (int i = 2; i <= n; i++) { // O(n)
    if (fac[i] == -1) {
      for (int j = 1; lli(i) * j <= n; j++) { // O(logn)
        fac[i * j] = i;
      }
    }
  }
}

vector<int> factorizarConCriba(int n) {
  vector<int> f;
  while (n != 1) {
    f.push_back(fac[n]);
    n /= fac[n];
  }
  return f;
}

map<int, int> factorize(int n) {
  map<int, int> cnt;
  while (n > 1) {
    cnt[fac[n]]++;
    n /= fac[n];
  }
  return cnt;
}

const int X = 10001;

map<int, int> factorizarHibrido(lli n) {
  map<int, int> cnt;
  // factorizar con los primos hasta que n sea menor que X
  for (int p : primes) {
    debug(n);
    if (n < X) {
      break;
    }
    if (n % p == 0) {
      debug("Usa este primo", p);
      while (n % p == 0) {
        n /= p;
        cnt[p]++;
      }
    }
  }
  debug("Ahora intenta factorización con criba", n);
  if (n < X) {
    // factorización con criba
    while (n > 1) {
      cnt[fac[n]]++;
      n /= fac[n];
    }
  } else {
    debug("aqui");
    cnt[n]++;
  }

  return cnt;
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  criba(X);

  getPrimes(X);
  debug(primes);

  cribaDivisores(X);
  for (int i = 1; i <= 15; i++) {
    debug(i, divisores[i]);
  }

  debug(divisores[10000].size());
  debug(divisores[10000]);

  debug(factorizar(936));
  debug(primes.back());
  debug(factorizar(10079 * 2));

  // cribaFactorizacion(10079 * 2 + 1);
  cribaFactorizacion(X);
  // debug(factorizarConCriba(936));
  // debug(factorizarConCriba(10079 * 2));

  // debug(factorize(936));
  // debug(factorize(10079 * 2));

  const lli num = 1LL * 9852 * 2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 3 * 5 * 5 * 5 * 5 * 7 * 7;
  debug(factorizarHibrido(num));

  return 0;
}

/* Please, check the following:
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * write down your ideas
 * DON'T get stuck on ONE APPROACH!
 * ASK for HELP from your TEAMMATES
 */
