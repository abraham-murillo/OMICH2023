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
  queue<string> taco, chesco;
  int n;
  cin >> n;
  string siu, k;
  for (int x = 0; x < n; x++) {
    cin >> siu >> k;
    if (siu == "LLEGA") {
      taco.push(k);
    } else if (siu == "ATIENDE") {
      if (k == "TACO") {
        if (!taco.empty()) {
          chesco.push(taco.front());
          taco.pop();
        }
      } else if (k == "REFRESCO") {
        if (!chesco.empty()) {
          chesco.pop();
        }
      }
    }
  }
  while (!taco.empty()) {
    cout << taco.front() << " ";
    taco.pop();
  }
  cnl;
  while (!chesco.empty()) {
    cout << chesco.front() << " ";
    chesco.pop();
  }
  return 0;
}