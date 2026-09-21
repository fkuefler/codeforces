#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<int> ms(n);
    for (int& a : ms) cin >> a;

    auto primeDivs = [](int i) -> vector<int> {
      vector<int> divs;
      for (int d = 2; d * d <= i; d++) {
        while (i % d == 0) {
          divs.push_back(d);
          i /= d;
        }
      }
      if (i > 1) divs.push_back(i);
      return divs;
    };

    vector<long long> dp(n + 1, LONG_LONG_MAX);

    for (int i = 1; i <= n; i++) {
      if (i <= k) {
        dp[i] = 0;
      } else {
        auto divs = primeDivs(i);
        for (int& d : divs) {
          dp[i] = min(dp[i], 1 + d * dp[i / d]);
        }
      }
    }

    long long fk = 0;
    for (int& a : ms) fk += dp[a];

    cout << fk << '\n';
  }
}