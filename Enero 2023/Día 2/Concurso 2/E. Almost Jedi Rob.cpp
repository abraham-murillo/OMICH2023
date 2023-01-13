#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define endl '\n'
#define pb push_back
#define pf push_front
#define mp make_pair
#define fore(i, l, r) for (int i = l; i < r; i++)

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    string op;
    cin >> op;
    if (op == "ADD") {
      int v;
      cin >> v;
      arr.push_back(v);
    } else if (op == "POP") {
      arr.pop_back();
    } else if (op == "DELETE") {
      int l, r;
      cin >> l >> r;
      arr.erase(arr.begin() + l - 1, arr.begin() + r);
    } else {
      int v, pos;
      cin >> pos >> v;
      arr.insert(arr.begin() + pos - 1, v);
    }
  }

  for (int i : arr)
    cout << i << " ";
}