#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    vector<int> stab(n);
    for (int& v : stab) cin >> v;
    vector<vector<int>> tower(n, vector<int>(m));
    for (auto& row : tower) {
      for (int& a : row) cin >> a;
    }

    long long minOps = m;
    multiset<int, greater<int>> s;

    for (int i = n - 1; i >= 0; i--) {
      for (int a : tower[i]) {
        if (s.size() <= m || a > *prev(s.end())) {
          s.insert(a);
          if (s.size() > m) s.erase(prev(s.end()));
        }
      }

      long long totalDmg = 0, used = 0;
      for (int dmg : s) {
        totalDmg += dmg, used++;
        if (totalDmg >= stab[i]) {
          minOps = min(minOps, used);
          break;
        }
      }
    }

    cout << minOps << '\n';
  }
}