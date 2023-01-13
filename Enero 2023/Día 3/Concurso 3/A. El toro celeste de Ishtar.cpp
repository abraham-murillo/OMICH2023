#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  queue<int> cola;
  int t, n;
  cin >> t >> n;

  while (n--) {
    int a;
    cin >> a;
    cola.push(a);
  }

  int contador = 0;
  while (t > 0 && !cola.empty()) {
    t -= cola.front();
    cola.pop();
    contador++;
  }

  (t > 0) ? cout << 0 << "\n" : cout << contador << "\n";
}