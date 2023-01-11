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

// edad
// dinero
// nombre

struct Persona {
  int edad;
  int dinero;
  string nombre;
};

bool comparaPersona(Persona p1, Persona p2) {
  if (p1.edad == p2.edad) {
    if (p1.dinero == p2.dinero) {
      return p1.nombre < p2.nombre;
    }
    return p1.dinero < p2.dinero;
  }
  return p1.edad < p2.edad;
}

bool compara(int a, int b) {
  // a = 4, b = 6
  // a % 2 = 0
  // b % 2 = 0

  // a = 7
  // a % 2 = 1
  if (a % 2 == b % 2) { // su paridad es igual

    if (a % 2 == 0) { // si es par
      return a < b;
    } else {
      return a > b;
    }
  } else {
    return (a % 2) < (b % 2);
  }
}

int arr[] = {5, 3, 7, 1, 8, 90, 100, 90};

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  /**
   * minimo = 2 (1)
   * // {3, 4, 1, 3, 9, 10}
   *                     ^
   * {1, 3, 3, 4, 9, 10} n * n = n^2
   *  ^
   *

  // {1, 3, 3, 4, 9, 10}
  {10, 9, 4, 3, 3, 1}

  {10, 4, 9, 3, 3, 1}
  {4, 10, 9, 3, 3, 1} n = 6
   *

  lentos O(n^2) = 6^2 = 36
   bubble sort
   inserction sort <-

  eficientes
    O(n log2(n)) = 6 * log2(6) = 15
    merge sort
    quick sort

  sort
  */

  // leer
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int m;
  cin >> m;
  vector<Persona> personas(m);
  for (int i = 0; i < n; i++) {
    cin >> personas[i].edad >> personas[i].dinero >> personas[i].nombre;
  }

  // ordenar
  // for (int i = 0; i < n; i++) {
  //   // buscar el elemento más pequeño que esté en el rango [i, n - 1]
  //   int minimo = i;
  //   for (int j = i; j < n; j++) {
  //     if (a[j] > a[minimo]) {
  //       // actualizamos el minimo
  //       minimo = j;
  //     }
  //   }

  //   // intercambiar posiciones
  //   swap(a[i], a[minimo]);
  // }

  // a == b
  // a estaba antes que b
  // a estará antes que b
  stable_sort(begin(a), end(a));
  sort(begin(personas), end(personas), comparaPersona);

  sort(arr, arr + 4);
  debug(arr);
  // {1, 3, 7, 3, -1, 10}

  // {-1, 1, 3, 3, 7, 10}

  // Persona: edad, dinero, nombre
  // 10 30 Abraham
  // 10 40 Pino

  // imprimir
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';

  for (int i = 0; i < m; i++) {
    cout << personas[i].edad << " " << personas[i].dinero << " " << personas[i].nombre << '\n';
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