#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define fore(i, x, y) for (int i = x; i < y; i++)
#define forex(i, x, y) for (ll i = x - 1; i >= y; i--)
#define jl "\n"

set<ll> a;

void divs(ll n) {
  ll raiz = sqrt(n);
  for (ll i = 1; i <= raiz; i++) {
    if (n % i == 0) {
      a.insert(i);
      a.insert(n / i);
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  ll n;
  cin >> n;
  while (cin >> n) {
    a.clear();
    divs(n);
    cout << a.size() << jl;
  }
}