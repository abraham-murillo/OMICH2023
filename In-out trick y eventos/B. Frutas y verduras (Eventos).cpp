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

enum {
  IN,
  QUERY,
  OUT,
};

struct Event {
  int productId; // ¿a qué producto pertenece?
  int pos; // ¿en dónde en el arreglo?
  int type; // ¿qué estoy haciendo?
  string stype;
};

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  lli n, q;
  cin >> n;

  vector<Event> events;

  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    events.push_back(Event{-1, i, QUERY, "QUERY"});
  }

  vector<int> f(n), v(n);
  fore (i, 0, n) {
    cin >> f[i] >> v[i];
    events.push_back(Event{i, f[i], IN, "IN"});
    events.push_back(Event{i, v[i], OUT, "OUT"});
  }

  sort(events.begin(), events.end(), [&](Event a, Event b) {
    if (a.pos == b.pos)
      return a.type < b.type;
    return a.pos < b.pos;
  });

  multiset<int> ms;
  for (Event& e : events) {
    debug(e.productId, e.pos, e.stype, ms);

    if (e.type == IN) {
      ms.insert(f[e.productId]);
    } else if (e.type == OUT) {
      ms.erase(ms.find(f[e.productId]));
    } else if (e.type == QUERY) {
      // más fresco o -1
      if (ms.empty()) {
        cout << "-1 ";
      } else {
        cout << e.pos - *ms.rbegin() << ' ';
      }

      // más viejo o -1
      if (ms.empty()) {
        cout << "-1 ";
      } else {
        cout << e.pos - *ms.begin() << ' ';
      }

      // cuenta de elementos
      cout << ms.size() << '\n';
    }
  }

  cout << "\n";

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
