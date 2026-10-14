#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    vector<long long> preSum(n + 1);
    for (int i = 0; i < n; i++) {
      preSum[i + 1] = preSum[i] + arr[i];
    }

    vector<int> mod(k);
    long long ans = 0;

    for (int i = 1; i <= n; i++) {
      if (i > k) {
        mod[preSum[i - k - 1] % k]++;
        ans += mod[preSum[i] % k];
      }
    }

    cout << ans << '\n';
  }
}
