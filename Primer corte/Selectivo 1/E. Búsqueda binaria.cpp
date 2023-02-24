#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int a, b;

int main() {

  cin >> a;
  set<int> x;

  while (a--) {
    cin >> b;
    x.insert(b);
  }

  vector<int> v;

  cin >> a;

  while (a--) {

    cin >> b;

    if (x.find(b) != x.end()) {
      cout << 1 << " ";
    } else {
      cout << 0 << " ";
    }
  }

  return 0;
}