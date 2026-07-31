#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n);
    for (int& w : arr) cin >> w;

    if (n & 1) {
      cout << "NO\n";
      continue;
    }

    int lb = 0, ub = INT_MAX;
    for (int i = 0; i < n; i += 2) {
      ub = min(ub, arr[i] - 1);
      lb = max(lb, arr[i + 1] + 1);
    }

    cout << (ub >= lb ? "YES\n" : "NO\n");
  }
}