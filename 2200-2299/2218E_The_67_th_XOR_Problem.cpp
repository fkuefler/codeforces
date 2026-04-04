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
    for (int& a : arr) cin >> a;

    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        ans = max(ans, arr[i] ^ arr[j]);
      }
    }

    cout << ans << '\n';
  }
}