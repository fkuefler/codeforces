#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    int m = 0;
    multiset<int> gaps;
    for (int i = 0; i < n - 1; i++) {
      gaps.insert(abs(arr[i] - arr[i + 1]));
      if (abs(arr[i] - arr[i + 1]) > abs(arr[m] - arr[m + 1])) {
        m = i;
      }
    }

    int ans = *prev(gaps.end());

    auto gaps_ = gaps;
    gaps_.erase(gaps_.find(abs(arr[m] - arr[m + 1])));

    for (int i = m; i >= 0; i--) {
      if (i > 0) gaps_.erase(gaps_.find(abs(arr[i] - arr[i - 1])));

      int j = i > 0 ? abs(arr[i - 1] - 2 * arr[m]) : 0;
      int k = abs(2 * arr[i] - arr[m + 1]);
      ans = min(ans, max(gaps_.size() ? *prev(gaps_.end()) : 0, max(j, k)));

      if (i > 0) gaps_.insert(2 * abs(arr[i] - arr[i - 1]));
    }

    gaps_ = gaps;
    gaps_.erase(gaps_.find(abs(arr[m] - arr[m + 1])));

    for (int i = m + 1; i < n; i++) {
      if (i + 1 < n) gaps_.erase(gaps_.find(abs(arr[i] - arr[i + 1])));

      int j = i + 1 < n ? abs(arr[i + 1] - 2 * arr[m + 1]) : 0;
      int k = abs(2 * arr[i] - arr[m]);
      ans = min(ans, max(gaps_.size() ? *prev(gaps_.end()) : 0, max(j, k)));

      if (i + 1 < n) gaps_.insert(2 * abs(arr[i] - arr[i + 1]));
    }

    cout << ans << '\n';
  }
}