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

struct Frac {
  lli num, den;

  Frac(lli a = 0, lli b = 1) {
    lli g = gcd(a, b);
    num = a / g, den = b / g;
    if (den < 0)
      num *= -1, den *= -1;
  }

  friend ostream& operator<<(ostream& os, const Frac& f) {
    return os << f.num << " / " << f.den;
  }

  Frac operator+(const Frac& f) {
    lli k = lcm(den, f.den);
    return Frac(num * (k / den) + f.num * (k / f.den), k);
  }
};

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  lli a, b;
  Frac sum = 0;
  while (cin >> a >> b) {
    sum = sum + Frac(a, b);
  }

  cout << sum << '\n';

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