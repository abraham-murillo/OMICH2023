#include <bits/stdc++.h>
#include <iostream>
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
using namespace std;
bool ord(pair<int, int> a, pair<int, int> b) {
  return a.first < b.first;
}
int main() {
  int n, f;
  cin >> f >> n;
  bool res = true;
  vector<pair<int, int>> a;
  for (int i = 0; i < n; i++) {
    int e, r;
    cin >> e >> r;
    a.pb(mp(e, r));
  }
  sort(all(a), ord);
  for (int i = 0; i < n; i++) {
    if (f > a[i].first) {
      f += a[i].second;
    } else {
      res = false;
      break;
    }
  }
  cout << (res ? "Si" : "No");
}