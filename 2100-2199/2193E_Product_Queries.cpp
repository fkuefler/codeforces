#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> dp(n + 1);

    for (int i = 0, a; i < n; i++) {
      cin >> a;
      dp[a] = 1;
    }

    for (int i = 1; i <= n; i++) {
      if (dp[i]) {
        cout << dp[i] << ' ';
      } else {
        for (int j = 2; j <= static_cast<int>(sqrt(n)); j++) {
          if (i % j == 0 && dp[j] && dp[i / j]) {
            if (!dp[i]) {
              dp[i] = dp[j] + dp[i / j];
            } else {
              dp[i] = min(dp[i], dp[j] + dp[i / j]);
            }
          }
        }
        if (dp[i]) {
          cout << dp[i] << ' ';
        } else {
          cout << -1 << ' ';
        }
      }
    }
    cout << '\n';
  }
}