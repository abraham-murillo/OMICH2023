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

long long a[1000005]; // a[i] almacena la respuesta para f(i)

int f(long long n) { // f(n) n == 1, n == 0
  debug(n);

  if (n == 0 || n == 1) { // casos base
    return 1;
  }

  if (a[n] != -1) { // ya calculé la respuesta antes?
    return a[n];
  }

  long long res = f(n - 1) + f(n - 2); // calcular la respuesta
  a[n] = res; // guardar la respuesta en el arreglo
  return res;
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  fill(a, a + 1000005, -1); // [-1, -1, -1, ...]
  int n; cin >> n;
  cout << f(n) << '\n';
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