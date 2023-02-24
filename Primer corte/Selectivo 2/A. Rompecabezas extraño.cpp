#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  map<string, int> cnt;
  int mx = 0;
  while (n--) {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    mx = max(mx, ++cnt[s]);
  }

  cout << mx << '\n';

  return 0;
}