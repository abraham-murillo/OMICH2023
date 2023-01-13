#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define endl '\n'
#define pb push_back
#define pf push_front
#define mp make_pair
#define fore(i, l, r) for (int i = l; i < r; i++)

void seci(long n) {
  vector<long> r;
  long con = 0;
  while (n != 1) {
    con++;
    r.pb(n);
    if (n % 2)
      n = n * 3 + 1;
    else
      n = n / 2;
  }
  cout << con + 1 << endl;
  for (int i : r) {
    cout << i << " ";
  }
  cout << 1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);
  long n;
  cin >> n;
  seci(n);
}