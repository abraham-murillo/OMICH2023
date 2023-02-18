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

int totLento = 0, tot = 0;

bool esPrimoLento(int p) {
  if (p == 2) {
    return true;
  }
  if (p % 2 == 0) {
    // es par
    return false;
  }
  int cnt = 0;
  for (int x = 1; x <= p; x++) {
    totLento++;
    if (p % x == 0) {
      cnt++;
    }
    if (cnt > 2) {
      break;
    }
  }
  return cnt == 2;
}

bool esPrimo(int p) {
  if (p == 2) {
    return true;
  }
  if (p % 2 == 0) {
    // es par
    return false;
  }
  int cnt = 0;
  int sqn = sqrt(p) + 1;
  for (int x = 1; x <= sqn; x++) {
    tot++;
    if (p % x == 0) {
      cnt++;
    }
    if (p % (p / x) == 0) {
      cnt++;
    }
    if (cnt > 2) {
      break;
    }
  }
  return cnt == 2;
}

vector<int> gcdLento(int a, int b) {
  vector<int> fac;
  for (int p = 2; a != 1 || b != 1; p++) {
    if (p > a || p > b)
      break;
    if (esPrimo(p)) {
      while (a % p == 0 && b % p == 0) {
        a /= p;
        b /= p;
        fac.push_back(p);
      }
    }
  }
  return fac;
}

lli gcd(lli a, lli b) {
  return b ? gcd(b, a % b) : a;
}

lli lcm(lli a, lli b) {
  return a / gcd(a, b) * b;
}

vector<int> divisoresLento(int n) {
  vector<int> d;
  for (int p = 1; p <= n; p++) {
    if (n % p == 0) {
      d.push_back(p);
    }
  }
  return d;
}

vector<int> divisores(int n) {
  // Divisores rápido
  vector<int> d;
  int sqn = sqrt(n) + 1;
  for (int p = 1; p <= sqn; p++) {
    if (n % p == 0) {
      d.push_back(p);
      d.push_back(n / p);
    }
  }
  return d;
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  for (int i = 1; i <= 100; i++) {
    if (esPrimo(i)) {
      cout << i << "\n";
    }
  }

  debug(gcdLento(25, 10));
  debug(gcdLento(24, 96));

  debug(gcd(38, 20));

  debug(divisores(8));
  debug(divisores(6));
  debug(divisores(96));
  debug(divisores(9));

  esPrimoLento(104729);
  esPrimo(104729);
  debug(totLento, tot);

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
