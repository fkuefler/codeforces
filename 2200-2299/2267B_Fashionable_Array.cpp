#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> counts(101);
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      counts[a]++;
    }

    vector<int> ans;

    while (ans.size() < n) {
      for (int i = 100, ct = 0; i > 0; i--) {
        if (counts[i]) {
          if (ct == 0) {
            ct = counts[i];
          }
          for (int j = 0; j < min(ct, counts[i]); j++) {
            ans.push_back(i);
          }
          counts[i] -= min(ct, counts[i]);
        }
      }
    }

    for (int& a : ans) cout << a << ' ';
    cout << '\n';
  }
}