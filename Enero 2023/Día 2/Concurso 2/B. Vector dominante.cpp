#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define endl '\n'
#define pb push_back
#define pf push_front
#define mp make_pair
#define fore(i, l, r) for (int i = l; i < r; i++)

bool dom(vector<int>& a, vector<int>& b) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] <= b[i]) {
      return false;
    }
  }
  return true;
}
int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);

  vector<int> a, b;
  int n;
  cin >> n;
  int e;
  for (int i = 0; i < n; i++) {
    cin >> e;
    a.pb(e);
  }
  for (int i = 0; i < n; i++) {
    cin >> e;
    b.pb(e);
  }
  cout << dom(a, b);
}