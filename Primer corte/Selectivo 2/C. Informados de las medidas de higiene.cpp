#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define all(x) x.begin(), x.end()
using lli = long long int;

using namespace std;
int bs(long long bus, vector<lli>& arr, int n) {
  int m;
  int l = 1;
  int r = n;
  while (l + 1 < r) {
    m = (l + r) / 2;
    if (arr[m] < bus) {
      l = m;
    } else {
      r = m;
    }
  }
  return arr[l] >= bus ? l : r;
}

int main() {
  int n;
  cin >> n;
  int m;
  cin >> m;
  int a;
  vector<lli> pf(n + 2, 0);
  for (int i = 0; i < n; i++) {
    cin >> a;
    pf[i + 1] = pf[i] + a;
  }
  while (m--) {
    lli bus;
    cin >> bus;
    cout << bs(bus, pf, n) << " ";
  }
}