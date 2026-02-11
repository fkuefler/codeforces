#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> permIdx(n + 1);
  for (int i = 0, p; i < n; i++) {
    cin >> p;
    permIdx[p] = i;
  }

  vector<int> arr(n);
  for (int& a : arr) cin >> a;

  int maxIdx = 0;
  for (int& a : arr) {
    if (permIdx[a] < maxIdx) {
      cout << "NO\n";
      return;
    }
    maxIdx = max(maxIdx, permIdx[a]);
  }

  cout << "YES\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}