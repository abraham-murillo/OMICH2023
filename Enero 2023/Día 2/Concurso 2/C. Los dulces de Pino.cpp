#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define cnl cout << "\n"
#define nl "\n"
#define sp fixed << setprecision
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  queue<int> caja, dulce;
  int n, m, k, ac = 0;
  cin >> n >> m;
  for (int x = 0; x < n; x++) {
    cin >> k;
    caja.push(k);
  }
  for (int x = 0; x < m; x++) {
    cin >> k;
    dulce.push(k);
  }
  while (!caja.empty() && !dulce.empty()) {
    if (dulce.front() >= caja.front()) {
      int ca = caja.front();
      dulce.front() = dulce.front() - ca;
      caja.pop();
      if (!dulce.front() && dulce.empty() == 0)
        dulce.pop();
    } else {
      ac += dulce.front();
      dulce.pop();
    }
  }
  while (!dulce.empty()) {
    ac += dulce.front();
    dulce.pop();
  }
  cout << ac;
  return 0;
}