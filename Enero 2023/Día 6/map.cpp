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

map<string /*key*/, int /*value*/> m;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  m["Abraham"] = 1;
  m["Pino"] = 2;
  m["LuisFer"] = 3;
  m["Edmundo"] = 4;
  m["Robe"] = 5;
  m["Job"] = 123;
  // m["Chucho"] = 456;
  m.insert({"Chucho", 457});

  debug(m);

  debug(m.size());
  debug(m.empty());

  m.erase("Abraham");
  debug(m);

  // Pasándolo a pair al usar el * al principio
  auto inicio = *m.begin();
  debug(inicio.first, inicio.second);

  // No tiene asterisco, sigue siendo un iterador
  auto fin = m.rbegin();
  // Desreferenciarlo usando * al principio para convertirlo en pair
  debug((*fin).first, (*fin).second);
  // Usando el operador -> para punteros/iteradores
  debug(fin->first, fin->second);

  auto findEdmundo = m.find("Edmundo");
  debug(findEdmundo->first, findEdmundo->second);

  auto findAbraham = m.find("Abraham");
  if (findAbraham == m.end()) {
    debug("No existe");
  } else {
    debug(findAbraham->first, findAbraham->second);
  }

  auto low = m.lower_bound("Primo");
  debug(low->first, low->second);

  auto upp = m.upper_bound("Cynthia");
  debug(upp->first, upp->second);

  auto pinoman = m.find("Pinoman");
  if (pinoman != m.end()) {
    m.erase(pinoman);
  } else {
    debug("No existe Pinoman");
  }

  auto pino = m.find("Pino");
  if (pino != m.end()) {
    m.erase(pino);
  } else {
    debug("No existe Pino");
  }
  debug(m);

  m["Pino"] = 5;
  debug(m);

  if (m["Daniel"]) {
    debug("Existe daniel");
  } else {
    debug("No existe");
  }
  debug(m);

  // 1 o 0
  // NO USEN COUNT EN MULTISET O MUEREN :)
  if (m.count("Pino")) {
    debug("Pino es real");
  } else {
    debug("No existe Pino");
  }

  for (auto it : m) {
    debug(it.first, it.second);
  }

  for (auto [key, value] : m) {
    debug(key, value);
  }

  for (auto it = m.begin(); it != m.end(); it++) {
    debug(it->first, it->second);
  }

  for (auto it = m.rbegin(); it != m.rend(); it++) {
    debug(it->first, it->second);
  }

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
