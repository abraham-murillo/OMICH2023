#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;

// struct

/*

int, long long
float, double
bool
char, string

short, unsigned, ...



*/

struct Persona {
  string nombre;
  string apellidoPaterno;
  string apellidoMaterno;
  int edad = 1;
  int dinero = 0;

  string nombreCompleto() {
    return nombre + " " + apellidoPaterno + " " + apellidoMaterno;
  }

  bool esMayorDeEdad() {
    return edad >= 18;
  }

  void modificarDinero(int valor) {
    dinero += valor;
  }

  bool operator==(const Persona& p) {
    // Si dos personas tienen el mismo nombre
    // this
    // p
    return nombre == p.nombre;
  }

  bool operator<(const Persona& p) {
    return edad < p.edad;
  }

  void operator+=(int masEdad) {
    edad += masEdad;
  }

  // !=, <=, >=, >, <, ==
  // +, -, &, %, *, /, etc
  // >>, << NO se los voy a dar
};

void f(const Persona& p) {
  // p.nombre = "juanito";
}

struct Mascota {
  string duenio;
  string nombre;
  string especie;

  void leer() {
    cin >> duenio;
    cin >> nombre;
    cin >> especie;
  }

  void imprimir() {
    cout << "dueño: " << duenio << '\n';
    cout << "nombre: " << nombre << '\n';
    cout << "especie: " << especie << '\n';
  }
};

// pair

// tuple

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  string nombre;
  nombre = "Abraham";

  Persona p1;
  p1.nombre = "Abraham";
  p1.apellidoPaterno = "Murillo";
  p1.apellidoMaterno = "Sandoval";
  p1.edad = 200;

  Persona p2;
  p2.nombre = "Edmundo";
  p2.apellidoPaterno = "Canedo";
  p2.apellidoMaterno = "Cervantes";
  p2.edad = 17;

  cout << p1.nombreCompleto() << '\n';
  cout << p1.esMayorDeEdad() << '\n';

  cout << p2.nombreCompleto() << '\n';
  cout << p2.esMayorDeEdad() << '\n';

  p2.modificarDinero(-400);
  p1.modificarDinero(+400);

  cout << p1.nombre << " " << p1.dinero << '\n';
  cout << p2.nombre << " " << p2.dinero << '\n';

  Persona p3;
  p3.nombre = "Edmundo";
  p3.apellidoPaterno = "ABC";
  p3.apellidoMaterno = "DEF";
  p3.edad = 18;

  if (p1 == p2) {
    cout << "Tiene en el mismo nombre\n";
  } else {
    cout << "Nel\n";
  }

  if (p2 == p3) {
    cout << "Tiene en el mismo nombre\n";
  } else {
    cout << "Nel\n";
  }

  if (p1 < p2) {
    cout << "Es mas peque\n";
  } else {
    cout << "No es mas peque\n";
  }

  if (p2 < p3) {
    cout << "Es mas peque\n";
  } else {
    cout << "No es mas peque\n";
  }

  cout << p1.nombre << " " << p1.edad << '\n';
  cout << p2.nombre << " " << p2.edad << '\n';
  p2 += 500;
  p1 += (-150);
  cout << p1.nombre << " " << p1.edad << '\n';
  cout << p2.nombre << " " << p2.edad << '\n';

  cout << p1.nombre << '\n';
  f(p1);
  cout << p1.nombre << '\n';

  Mascota m;
  m.duenio = "Abraham";
  m.nombre = "Galleta";
  m.especie = "Perro";

  // Mascota m2;
  // cout << "Leer mascota 2\n";
  // cin >> m2.duenio;
  // cin >> m2.nombre;
  // cin >> m2.especie;

  // cout << "dueño: " << m3.duenio << '\n';
  // cout << "nombre: " << m3.nombre << '\n';
  // cout << "especie: " << m3.especie << '\n';

  Mascota m3;
  // cout << "Leer mascota 3\n";
  // m3.leer();
  // m3.imprimir();

  pair<int, double> par;
  par.first = 123;
  par.second = 0.5;
  pair<int, double> par2;
  par2.first = 500;
  par2.second = 0.5;

  cout << par.first << '\n';
  cout << par.second << '\n';

  if (par == par2) {
    cout << "Los pares son iguales\n";
  } else {
    cout << "Nel\n";
  }

  if (par < par2) {
    cout << "Es mas peque\n";
  } else {
    cout << "Nel, no es mas peque\n";
  }

  pair<int, pair<string, double>> parDeTres;

  parDeTres.first = 123;
  parDeTres.second.first = "ABC";
  parDeTres.second.second = 0.123;

  cout << parDeTres.first << '\n';
  cout << parDeTres.second.first << '\n';
  cout << parDeTres.second.second << '\n';

  return 0;
}
