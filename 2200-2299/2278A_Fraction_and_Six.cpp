#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  string p, q;
  cin >> n >> m >> p >> q;

  multiset<char> ms;
  for (char c : p) ms.insert(c);

  for (char c : q) {
    auto it = ms.find(c);
    if (it != ms.end()) {
      ms.erase(it);
    } else {
      cout << "NO\n";
      return;
    }
  }

  if (ms.size() == 3 && ms.count('s') == 1 && ms.count('i') == 1 &&
      ms.count('x') == 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}