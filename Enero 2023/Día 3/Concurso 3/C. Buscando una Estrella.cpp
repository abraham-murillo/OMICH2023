#include <bits/stdc++.h>
#include <iostream>
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
using namespace std;

struct orden {
  bool operator()(long x, long y) {
    return !(x < y);
  }
};

priority_queue<long, vector<long>, orden> pq;

int main() {
  int n;
  char s;
  long e, k, l;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == 'R') {
      cin >> e;
      pq.push(e);
    } else if (s == 'S') {
      if (pq.size() < 3) {
        cout << "NO HAY SUFICIENTES PUNTAJES" << endl;
      } else {
        e = pq.top();
        cout << e << " ";
        pq.pop();
        k = pq.top();
        cout << k << " ";
        pq.pop();
        l = pq.top();
        cout << l << endl;
        pq.pop();
        pq.push(l);
        pq.push(k);
        pq.push(e);
      }
    } else {
      if (pq.size()) {
        pq.pop();
      }
    }
  }
  if (pq.empty()) {
    cout << "NO HUBO GANADOR";
    return 0;
  }
  while (!pq.empty()) {
    e = pq.top();
    pq.pop();
  }
  cout << "EL PUNTAJE MAS ALTO FUE " << e;
}