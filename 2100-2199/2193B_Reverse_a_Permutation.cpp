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
    for (int& p : arr) cin >> p;

    int l = 0;
    while (l < n && arr[l] == n - l) {
      cout << n - l << ' ';
      l++;
    }

    if (l != n) {
      int r = find(arr.begin() + l, arr.end(), n - l) - arr.begin();

      for (int i = r; i >= l; i--) cout << arr[i] << ' ';
      for (int i = r + 1; i < n; i++) cout << arr[i] << ' ';
    }

    cout << '\n';
  }
}