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

bool bs(vector<long>& arr, long bus, int l, int r) {
  int mid;
  while (l <= r) {
    mid = (l + r) / 2;
    if (arr[mid] == bus) {
      return true;
    }
    if (arr[mid] < bus) {
      l = mid + 1;
    } else
      r = mid - 1;
  }
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);
  int n;
  cin >> n;
  long bus;
  cin >> bus;
  vector<long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    if (bs(arr, bus - arr[i], i + 1, arr.size() - 1)) {
      cout << "SI";
      return 0;
    }
  }
  cout << "NO";
}