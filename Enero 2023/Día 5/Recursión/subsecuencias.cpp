#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for (auto i = (l) - ((l) > (r)); i != (r) - ((l) > (r)); i += 1 - 2 * ((l) > (r)))
#define sz(x) int(x.size())
#define all(x) begin(x), end(x)
#define f first
#define s second
#define pb push_back

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ld = long double;
using lli = long long;
using ii = pair<int, int>;


// O(2^n)
void f(const string &s, int indice, string& t) {
  if (indice >= (int)s.size()) { // caso base, ya llegué al final de la cadena s
    cout << t << '\n';
  } else {
    // no lo tomo
    f(s, indice + 1, t);
    // lo tomo
    t += s[indice];
    f(s, indice + 1, t);
    t.pop_back();
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  string s; cin >> s;
  string t = "";
  f(s, 0, t);
  return 0;
}

/* Please, check the following:
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * write down your ideas
 * DON'T get stuck on ONE APPROACH!
 * ASK for HELP from your TEAMMATES
 */