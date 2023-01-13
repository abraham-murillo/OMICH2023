#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
using ii = pair<int, int>;

int main() {
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);

  int ini, lim;
  cin >> ini >> lim;

  fore (i, 0, lim / ini) {
    cout << ini * (i + 1) << " ";
  }

  return 0;
}