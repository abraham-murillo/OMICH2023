#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define pf push_front
#define mp make_pair
#define fore(i, l, r) for (int i = l; i < r; i++)

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);
  deque<int> q;
  int n;
  cin >> n;
  bool d = true;
  for (int i = 0; i < n; i++) {
    string aux;
    cin >> aux;
    if (aux == "AGREGA") {
      int v;
      cin >> v;
      if (d)
        q.pb(v);
      else
        q.pf(v);
    } else if (aux == "QUITA") {
      if (!d) {
        cout << q.front() << endl;
        q.pop_front();
      } else {
        cout << q.back() << endl;
        q.pop_back();
      }
    } else
      d = !d;
  }
}