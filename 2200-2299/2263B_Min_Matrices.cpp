#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    if (k < n || k >= 2 * n) {
      cout << -1 << '\n';
    } else {
      vector<vector<int>> m(n, vector<int>(n));
      int next = 1;
      for (int i = 0; i < n; i++) m[i][i] = next++;

      for (int i = n - 1, fa = n; i > 0 && fa < k; i--, fa++) {
        m[i][0] = m[i][i];
        m[0][i] = next++;
        m[i][i] = 0;
      }

      for (auto& row : m) {
        for (int a : row) cout << (a ? a : next++) << ' ';
        cout << '\n';
      }
    }
  }
}