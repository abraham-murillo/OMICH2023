#include <bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for (int i = l; i < r; i++)

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

bool cancelAndWin(string& s, queue<int>& a) {
  s[a.front()] = '.';
  a.pop();
  return a.size() <= 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  string s;
  while (cin >> s) {
    queue<int> jedi, sith;
    fore (i, 0, s.size())
      (s[i] == 'J' ? jedi : sith).push(i);

    char wins = '?';
    if (jedi.empty()) {
      wins = 'S';
    } else if (sith.empty()) {
      wins = 'J';
    } else {
      fore (i, 0, s.size()) {
        if (s[i] == '.')
          continue;

        if (cancelAndWin(s, s[i] == 'J' ? sith : jedi))
          wins = s[i];

        if (wins != '?')
          break;
      }
    }

    cout << (wins == 'J' ? "Perdiste Abraham" : "¡Yo soy el senado!") << '\n';
  }

  return 0;
}