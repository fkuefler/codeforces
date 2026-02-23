#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x, y;
  cin >> t;

  while (t--) {
    cin >> x >> y;

    x -= max(0, y) * 2 + max(0, -y) * 4;

    cout << (x >= 0 && x % 3 == 0 ? "YES\n" : "NO\n");
  }
}