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
  bool operator()(const Persona& a, const Persona& b) const {
    if (a.edad != b.edad)
      return a.edad < b.edad;
    return a.nombre < b.nombre;
  }
};

struct Orden {
  bool operator()(int a, int b) const {
    return a > b;
  }
};

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  map<int, int, Orden> mp;
  for (int i : {1, 4, 7, 8, 9, 12, 567, 2342, 456}) {
    mp[i] = i;
  }
  debug(mp);

  map<Persona, int> personas;
  personas.insert({{"Abraham", 22}, 5});
  personas[{"Abraham Malo", 22}] = 1;
  personas[{"Z Abraham", 22}] = 2;
  personas[{"B Abraham", 22}] = 2;
  personas[{"Pino", 21}] = 2;
  personas[{"Luis", 25}] = 2;
  personas[{"Edmundo", 17}] = 2;

  for (auto [persona, valor] : personas) {
    debug(persona.edad, persona.nombre, valor);
  }

  map<Persona, int, OrdenPersona> personas2;
  personas2.insert({{"Abraham", 22}, 5});
  personas2[{"Abraham Malo", 22}] = 1;
  personas2[{"Z Abraham", 22}] = 2;
  personas2[{"B Abraham", 22}] = 2;
  personas2[{"Pino", 21}] = 2;
  personas2[{"Luis", 25}] = 2;
  personas2[{"Edmundo", 17}] = 2;

  debug("Personas2");
  for (auto [persona, valor] : personas2) {
    debug(persona.edad, persona.nombre, valor);
  }

  map<string, vector<int>> wtf;
  wtf["Abraham"].push_back(123);
  wtf["Abraham"].push_back(456);
  wtf["Abraham"].push_back(789);
  wtf["Pino"].push_back(1);
  wtf["Pino"].push_back(2);
  wtf["Pino"].push_back(3);
  wtf["Luis"].push_back(100);
  debug("Frankenstein");
  for (auto [key, vec] : wtf) {
    debug(key, vec);
  }

  map<string, map<string, int>> abc;
  abc["Abraham"]["Alguien"] = 123;

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
