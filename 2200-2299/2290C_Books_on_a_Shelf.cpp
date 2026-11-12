#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n);
    map<int, int> m;
    for (int& h : arr) {
      cin >> h;
      m[h]++;
    }

    int ans = 0;
    vector<int> out;
    for (auto& [h, c] : m) {
      ans += min(c, 2);
      for (int i = 0; i < c - 1; i++) {
        out.push_back(h);
      }
    }
    for (auto& [h, c] : views::reverse(m)) {
      out.push_back(h);
    }

    cout << ans << '\n';
    for (auto o : out) cout << o << ' ';
    cout << '\n';
  }
}