#include <bits/stdc++.h>
#define endl '\n'
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define pf push_front

using namespace std;

vector<int> divisores(int n) {
  int root = sqrt(n);
  vector<int> v;
  for (int i = 1; i <= root; i++) {
    if (n % i == 0) {
      v.push_back(i);
      if (i != n / i)
        v.push_back(n / i);
    }
  }
  sort(all(v));
  return v;
}

int main() {
  int n;
  cin >> n;
  auto res = divisores(n);
  for (int i : res)
    cout << i << " ";
}