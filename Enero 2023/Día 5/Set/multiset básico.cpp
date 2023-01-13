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

multiset<int> s;

template <class T>
void existe(T x) {
  if (x != s.end()) {
    debug(*x);
  } else {
    debug("No existe");
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  s.insert(1);
  s.insert(2);
  s.insert(-1);
  s.insert(100);
  s.insert(12);

  s.insert(2);
  s.insert(12);
  s.insert(12);
  s.insert(100);
  s.insert(100);
  s.insert(100);
  s.insert(100);

  debug(s);

  // Quitar el 100
  // s.erase(100);
  // debug(s);

  debug(s.size());
  debug(s.empty());

  debug(*s.begin());
  debug(*s.rbegin());

  debug(*s.find(2));

  if (s.find(3) == s.end()) {
    debug("NO existe");
  } else {
    debug(*s.find(3));
  }

  auto lo1 = s.lower_bound(1);
  auto upp1 = s.upper_bound(1);
  existe(lo1);
  existe(upp1);

  auto lo2 = s.lower_bound(2);
  auto upp2 = s.upper_bound(2);
  existe(lo2);
  existe(upp2);

  auto lo100 = s.lower_bound(100);
  auto upp100 = s.upper_bound(100);
  existe(lo100);
  existe(upp100);

  for (auto w : s) {
    cout << w << ' ';
  }
  cout << '\n';

  // No jala :c
  // for (int setSize = s.size(); setSize > 0; setSize--) {
  //   cout << s[setSize] << '\n';
  // }

  auto copy = s;
  while (!copy.empty()) {
    auto masGrande = *copy.rbegin();
    cout << masGrande << " ";
    copy.erase(masGrande);
  }
  cout << '\n';

  for (auto it = s.rbegin(); it != s.rend(); it++) {
    cout << *it << " ";
  }
  cout << '\n';

  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << '\n';

  // s.erase(12); Borra todos los 12

  auto it12 = s.find(12);
  s.erase(it12);

  auto it13 = s.find(13);
  existe(it13);
  if (it13 != s.end()) {
    s.erase(it13);
  }

  debug(s);

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
