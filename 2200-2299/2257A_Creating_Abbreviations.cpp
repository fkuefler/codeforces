#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  set<char> available;
  string w;
  for (int i = 0; i < n; i++) {
    cin >> w;
    available.insert(toupper(w[0]));
  }

  vector<string> abb(m);
  for (string& a : abb) cin >> a;

  for (string& a : abb) {
    for (char c : a) {
      if (!available.count(c)) {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}