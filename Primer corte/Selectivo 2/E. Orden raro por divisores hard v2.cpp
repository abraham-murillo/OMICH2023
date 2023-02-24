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

const int N = 1e6 + 5;
int a[N];
int mem[N];
int n;

int cuentaDivisores(int n) {
  if (mem[n] == -1) {
    mem[n] = 0;
    for (int i = 1; 1LL * i * i <= n; i++) {
      if (n % i == 0) {
        mem[n]++;
        if (n / i != i)
          mem[n]++;
      }
    }
  }
  return mem[n];
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  // Resetea todo el arreglo en -1
  memset(mem, -1, sizeof(mem));

  while (cin >> n) {
    fore (i, 0, n) {
      cin >> a[i];
    }

    sort(a, a + n, [&](int x, int y) {
      int cntX = cuentaDivisores(x);
      int cntY = cuentaDivisores(y);

      if (cntX == cntY) {
        return x > y;
      }
      return cntX < cntY;
    });

    fore (i, 0, n) {
      cout << a[i] << " ";
    }
    cout << '\n';
  }

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