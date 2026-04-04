#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;

  int n = x + y;
  if (x > n / 2 || (n % 2 == 0 && y == n)) {
    cout << "NO\n";
    return;
  } else {
    cout << "YES\n";
  }

  for (int i = 1, stop = 0; i < n; i++) {
    if (x > 0) {
      cout << i << ' ' << i + 1 << '\n';
      (x + y) % 2 ? y-- : x--;
      stop = i;
    } else {
      cout << stop + 1 << ' ' << i + 1 << '\n';
    }
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}