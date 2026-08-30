#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    vector<int> c(n);
    for (int& a : c) cin >> a;

    sort(c.begin(), c.end());

    int ans = 0;
    for (int i = 1; i <= m; i++) {
      auto lb = lower_bound(c.begin(), c.end(), i);
      auto eq = equal_range(c.begin(), c.end(), 2 * i);
      ans = max(ans, static_cast<int>(c.end() - lb + (eq.second - eq.first)));
    }

    cout << ans << '\n';
  }
}