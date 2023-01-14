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
  ll n, j;
  cin >> n;
  for (int x = 0; x < n; x++) {
    cin >> j;
    if (j == 1) {
      cout << x;
      return 0;
    }
  }
  return 0;
}