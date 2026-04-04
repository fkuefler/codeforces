#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    int l = 1, r = 3 * n;

    vector<int> ans(3 * n);
    for (int i = 0; i < 3 * n; i++) {
      if (i % 3 == 0) {
        ans[i] = l++;
      } else {
        ans[i] = r--;
      }
    }

    for (int a : ans) cout << a << ' ';
    cout << '\n';
  }
}