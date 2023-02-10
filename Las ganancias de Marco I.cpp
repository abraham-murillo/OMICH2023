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

int x[N];
lli sum[N];
int n, q;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
  }

  // hacer el prefix sum
  sum[0] = 0;
  for (int i = 1; i <= n; i++) {
    sum[i] = sum[i - 1] + x[i];
  }

  cin >> q;
  while (q--) {
    int a, b;
    cin >> a >> b;

    lli totalSum = sum[b] - sum[a - 1];
    cout << totalSum << '\n';
  }

  return 0;
}
