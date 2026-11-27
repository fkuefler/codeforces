#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n, k, p;
  cin >> t;

  while (t--) {
    cin >> n >> k >> p;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    sort(arr.begin(), arr.end());

    vector<pair<int, long long>> c((n + k - 1) / k);
    for (int i = 0; i < n; i++) {
      c[i / k].first++;
      c[i / k].second += arr[i];
    }

    long long ans = 0;
    for (int i = 0; i < c.size(); i++) {
      if (c[i].first == k) {
        ans += max(p, c[i].second);
      } else {
        ans += c[i].second;
      }
    }

    cout << ans << '\n';
  }
}