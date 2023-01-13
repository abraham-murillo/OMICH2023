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

lli a[N];
int n;
lli k;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  cin >> n >> k;
  fore (i, 0, n) {
    cin >> a[i];
  }

  sort(a, a + n);

  lli ans = 0;
  fore (i, 0, n) {
    if (binary_search(a, a + n, a[i] + k)) {
      auto upper = upper_bound(a, a + n, a[i] + k);
      auto lower = lower_bound(a, a + n, a[i] + k);
      ans += upper - lower;
    }
  }

  cout << ans << '\n';

  return 0;
}