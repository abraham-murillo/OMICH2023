#include "debug.h"
#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define forex(i, l, r) for (long long i = (l); i >= (r); i--)
#define ll long long
#define ull unsigned long long
#define nl cout << "\n"
#define cnl "\n"
#define rfc "\033[31;1m"
#define gfc "\033[32;1m"
#define yfc "\033[33;1m"
#define bfc "\033[34;1m"
#define pfc "\033[35;1m"
#define cfc "\033[36;1m"
#define nfc "\033[0m"
#define pb push_back
using namespace std;

struct Persona {
  string nombre;
  int edad;
  string ocupacion;

  void leer() {
    cin >> nombre >> edad >> ocupacion;
  }
};

int primero(vector<Persona>& personas, int edad) {
  int i = 0;
  for (auto x : personas) {
    if (x.edad == edad) {
      return i;
    }
    i++;
  }
  return -1;
}

int ultimo(vector<Persona>& personas, int edad) {
  int i = 0;
  for (int i = personas.size() - 1; i >= 0; i--) {
    auto x = personas[i];
    if (x.edad == edad) {
      return i;
    }
  }
  return -1;
}

int ultimoLento(vector<Persona>& personas, int edad) {
  int ultimo = -1;
  int i = 0;
  for (auto x : personas) {
    if (x.edad == edad) {
      ultimo = i;
    }
    i++;
  }
  return ultimo;
}

vector<int> todos(vector<Persona>& personas, int edad) {
  vector<int> posiciones;
  int i = 0;
  for (auto x : personas) {
    if (i != -1 && personas[i] == 5) {
      posiciones.push_back(i);
    }
    i++;
  }
  return posiciones;
}

int primeroTeniendoTodos(vector<Persona>& personas, int edad) {
  vector<int> posiciones = todos(personas, edad);

  return posiciones.size() > 0 ? posiciones[0] : -1;
}

int ultimoTeniendoTodos(vector<Persona>& personas, int edad) {
  vector<int> posiciones = todos(personas, edad);

  return posiciones.empty() ? -1 : posiciones.back() /* posiciones[posiciones.size() - 1]*/;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<Persona> personas;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    Persona p;
    p.leer();
    debug(i, p.nombre, p.edad);
    personas.push_back(p);
  }

  int edad = 25;

  // debug(primero(personas, 25));
  // debug(primero(personas, 100));

  // debug(ultimo(personas, 25));
  // debug(ultimo(personas, 100));

  // debug(ultimoLento(personas, 25));
  // debug(ultimoLento(personas, 100));

  debug(todos(personas, 25));
  debug(todos(personas, 100));

  debug(primeroTeniendoTodos(personas, 25));
  debug(primeroTeniendoTodos(personas, 100));

  debug(ultimoTeniendoTodos(personas, 25));
  debug(ultimoTeniendoTodos(personas, 100));

  cout << "\n";
}