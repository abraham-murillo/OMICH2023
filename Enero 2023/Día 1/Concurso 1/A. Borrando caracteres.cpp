#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int a = 0, b = 0, c = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a')
      a++;
    if (s[i] == 'b')
      b++;
    if (s[i] == 'c')
      c++;
  }

  (a + b - c) ? cout << "NO\n" : cout << "SI\n";
}