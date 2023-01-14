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
  ll n, m;
  cin >> n >> m;
  while (n != 0 && m != 0) {
    ll ac = 0;
    set<ll> juan;
    set<ll> jime;
    for (ll x = 0; x < n; x++) {
      ll k;
      cin >> k;
      juan.insert(k);
    }
    for (ll x = 0; x < m; x++) {
      ll k;
      cin >> k;
      jime.insert(k);
    }
    for (auto w : juan) {
      if (jime.find(w) != jime.end())
        ac++;
    }
    cout << ac << nl;
    cin >> n >> m;
  }
  return 0;
}
// les fokin go