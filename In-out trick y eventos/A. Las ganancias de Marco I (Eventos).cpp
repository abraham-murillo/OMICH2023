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
  SUM = 0,
  IN,
  OUT,
};

struct Event {
  int qi; // ¿a qué pregunta pertenece?
  int pos; // ¿en dónde en el arreglo?
  int type; // ¿qué estoy haciendo?
};

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  lli n, q;
  cin >> n;

  vector<Event> events;

  vector<lli> v(n + 1);
  v[0] = 0;
  fore (i, 0, n) {
    cin >> v[i + 1];
    events.push_back(Event{-1, i + 1, SUM});
  }

  int l, r; // left y right
  cin >> q; // leer cuantas preguntas vamos a contestar
  fore (i, 0, q) {
    cin >> l >> r;
    events.push_back(Event{i, l - 1, IN});
    events.push_back(Event{i, r, OUT});
  }

  sort(events.begin(), events.end(), [&](Event a, Event b) {
    if (a.pos == b.pos)
      return a.type < b.type;
    return a.pos < b.pos;
  });

  lli sum = 0;
  vector<lli> ans(q, 0); // donde vamos a guardar las respuesta
  for (Event& e : events) {
    if (e.type == IN) {
      ans[e.qi] -= sum;
    } else if (e.type == OUT) {
      ans[e.qi] += sum;
    } else if (e.type == SUM) {
      sum += v[e.pos];
    }
  }

  fore (i, 0, q) {
    cout << ans[i] << '\n';
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