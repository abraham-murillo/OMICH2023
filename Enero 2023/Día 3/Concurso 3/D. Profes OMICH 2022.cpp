#include <bits/stdc++.h>
#include <iostream>
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;

struct Per {
  long sal, ex;
  string nom;
  void leer() {
    char trash;
    cin >> nom >> trash >> sal >> ex;
  }
};

bool ord(Per a, Per b) {
  if (a.ex == b.ex) {
    if (a.sal == b.sal)
      return a.nom < b.nom;
    return a.sal < b.sal;
  }
  return a.ex > b.ex;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);
  vector<Per> arr;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    Per e;
    e.leer();
    arr.pb(e);
  }
  sort(all(arr), ord);
  for (int i = 0; i < n; i++) {
    cout << arr[i].nom << " $" << arr[i].sal << " " << arr[i].ex << endl;
  }
}