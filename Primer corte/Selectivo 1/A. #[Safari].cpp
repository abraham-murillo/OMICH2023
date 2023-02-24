#include <bits/stdc++.h>
#define endl '\n'
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define pf push_front

using namespace std;

int main() {
  char op;
  deque<string> q;
  int alimento = 0;
  while (cin >> op) {
    if (op == 'C') {
      int x;
      cin >> x;
      alimento += x;
    } else if (op == 'N') {
      string animal;
      cin >> animal;
      q.pb(animal);
    } else if (op == 'F') {
      cout << q.size() << endl;
    } else if (op == 'S') {
      cout << q.front() << endl;
      q.pop_front();
    } else if (op == 'A') {
      if (alimento < q.size()) {
        while (!q.empty()) {
          cout << q.back() << endl;
          q.pop_back();
        }
        return 0;
      }
      int corr = alimento / q.size();
      cout << corr << endl;
      alimento = alimento % q.size();
    }
  }
}