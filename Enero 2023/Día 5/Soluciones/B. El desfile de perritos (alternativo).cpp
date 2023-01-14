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
int n, e;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  cin >> n >> e;

  queue<string> q;
  string tmp;
  set<string> s;
  fore (i, 0, n) {
    cin >> tmp;
    q.push(tmp);

    if (q.size() > e) {
      s.erase(q.front());
      q.pop();
    }

    if (s.count(tmp)) {
      cout << "Habran dos perritos con el nombre " << tmp << " al mismo tiempo\n";
      return 0;
    } else {
      s.insert(tmp);
    }
  }

  cout << "El desfile de perritos estara bien hecho\n";

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