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

bool bs(vector<int>& arr, int bus) {
  int l = 0, r = arr.size() - 1, mid;
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

struct per {
  float e1, e2;
  float prom;
  int cn;
  per(int r, int t) {
    if (t == -1)
      cn = 1;
    else
      cn = 2;
    e1 = r;
    e2 = t;
    if (cn == 2)
      prom = (e1 + e2) / 2;
    else
      prom = e1;
  }
};

bool ord(per a, per b) {
  if (a.prom == b.prom) {
    if (a.cn == b.cn) {
      return a.e1 > b.e1;
    }
    return a.cn < b.cn;
  }
  return a.prom > b.prom;
}

int main() {
  int n;
  vector<per> arr;
  cin >> n;
  for (int i = 0; i < n; i++) {
    float r, t;
    cin >> r >> t;
    per a(r, t);
    arr.pb(a);
  }
  sort(arr.begin(), arr.end(), ord);
  for (auto x : arr) {
    cout << x.e1 << " " << x.e2 << endl;
  }
}