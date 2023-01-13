#include <iostream>
#include <string>

using namespace std;

struct tiros {
  int x;
  int num;
  int diez;
  int total;

  tiros() {
    x = 0;
    num = 0;
    diez = 0;
    total = 0;
  }

  void suma(string s) {
    if (s == "10") {
      diez++;
      total += 10;
    } else if (s == "X") {
      x++;
      total += 10;
    } else if (s == "M") {
      // Falló el tiro
    } else {
      int puntos = s[0] - '0';
      num += puntos;
      total += puntos;
    }
  }
};

int main() {
  int n;
  cin >> n;

  string aux; // Para leer los tiros

  // Job
  tiros job;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    job.suma(aux);
  }

  // Rob
  tiros rob;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    rob.suma(aux);
  }

  if (job.total > rob.total) {
    cout << "Job\n";
  } else if (rob.total > job.total) {
    cout << "Rob\n";
  } else {
    if (job.diez + job.x > rob.diez + rob.x) {
      cout << "Job\n";
    } else if (rob.diez + rob.x > job.diez + job.x) {
      cout << "Rob\n";
    } else {
      if (job.x > rob.x) {
        cout << "Job\n";
      } else {
        cout << "Rob\n";
      }
    }
  }
}