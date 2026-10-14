#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n + 1);
  for (int i = 0, a, b; i < m; i++) {
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (graph[i].empty()) {
      cout << "Brain Melt\n";
      return;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (graph[i].size() == n - 1 && m == n - 1) {
      cout << 2 << '\n';
      return;
    }
  }

  cout << "Many\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, m;
  cin >> t;

  while (t--) solve();
}