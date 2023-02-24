#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, conta = 0;
  cin >> a >> b >> c;

  while (conta < 45) {
    if (conta + a >= 45) {
      cout << "Maeva";
      return 0;
    } else {
      conta += a;
    }
    if (conta + b >= 45) {
      cout << "Lorena";
      return 0;
    } else {
      conta += b;
    }
    if (conta + c >= 45) {
      cout << "Ramona";
      return 0;
    } else {
      conta += c;
    }
  }
}