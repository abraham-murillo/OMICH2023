#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;
int a[N];
int n;

int thanosSort(int izq, int der) {
  if (izq == der) {
    return 1;
  }

  if (is_sorted(a + izq, a + der + 1)) {
    return der - izq + 1;
  }

  int mid = (izq + der) / 2;
  return thanosSort(mid + 1, der);
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << thanosSort(0, n - 1) << '\n';

  return 0;
}