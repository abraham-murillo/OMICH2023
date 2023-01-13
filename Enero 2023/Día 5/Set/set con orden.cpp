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

struct Persona {
  string nombre;
  int edad;

  friend bool operator<(const Persona& a, const Persona& b) {
    if (a.edad != b.edad)
      return a.edad < b.edad;
    return a.nombre < b.nombre;
  }
};

struct OrdenPersona {
  bool operator()(const Persona& a, const Persona& b) {
    if (a.edad != b.edad)
      return a.edad < b.edad;
    return a.nombre < b.nombre;
  }
};

set<Persona, OrdenPersona> personas2;
set<Persona> personas;

struct Orden {
  bool operator()(int a, int b) {
    return a > b;
  }
};

set<int, Orden> st;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  for (auto x : {1, 5, 7, 1, 61231, 243, 243, 35, 456565}) {
    st.insert(x);
  }

  debug(st);

  personas.insert({"Abraham", 22});
  personas.insert({"Abraham Malo", 22});
  personas.insert({"Z Abraham", 22});
  personas.insert({"B Abraham", 22});
  personas.insert({"Pino", 21});
  personas.insert({"Luis", 25});
  personas.insert({"Edmundo", 17});

  for (auto p : personas) {
    debug(p.edad, p.nombre);
  }

  auto busca22X = personas.lower_bound({"X", 22});
  auto busca22B = personas.lower_bound({"B", 22});

  debug(busca22X->nombre, busca22X->edad);
  debug(busca22B->nombre, busca22B->edad);

  // debug("personas2");
  // personas2.insert({"Abraham", 22});
  // personas2.insert({"Abraham Malo", 22});
  // personas2.insert({"Z Abraham", 22});
  // personas2.insert({"B Abraham", 22});
  // personas2.insert({"Pino", 21});
  // personas2.insert({"Luis", 25});
  // personas2.insert({"Edmundo", 17});

  // for (auto p : personas2) {
  //   debug(p.edad, p.nombre);
  // }

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
