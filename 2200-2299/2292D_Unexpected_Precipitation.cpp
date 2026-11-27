#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<long long> l(n), r(n);
    for (long long& x : l) cin >> x;
    for (long long& y : r) cin >> y;

    vector<long long> dp(n + 1);
    for (int i = n - 1; i >= 0; i--) {
      dp[i] = max(dp[i + 1] + l[i] - r[i], -dp[i + 1]);
    }

    if (dp[0] > 0) {
      cout << "Sunny\n";
    } else if (dp[0] == 0) {
      cout << "Draw\n";
    } else {
      cout << "Aubrey\n";
    }
  }
}