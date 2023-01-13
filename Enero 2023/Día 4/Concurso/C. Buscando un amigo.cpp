#include <bits/stdc++.h>
#include <iostream>
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define pf push_front
#define endl '\n'
#define f first
#define s second
using namespace std;

/*
1 2 3 4 5 4
yo = 3; bus = 4;
int i = yo; i < n+yo;

int j = yo; j < n+yo;
*/

int main() {
  int n;
  cin >> n;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  string yo, bus;
  cin >> yo >> bus;
  int pos = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == yo) {
      pos = i;
      break;
    }
  }
  int mn = 100005;
  int con = pos;
  int paso = 0;
  for (int i = pos; i < n + pos; i++) { // minimo hacia la derecha?
    if (arr[i % n] == bus) {
      mn = paso;
      break;
    }
    if (con < 0) {
      if (arr[n + con] == bus) { // n+con; // -1 == n-1
        mn = paso;
        break;
      }
    } else {
      if (arr[con] == bus) {
        mn = paso;
        break;
      }
    }
    paso++;
    con--;
  }
  cout << mn;
}