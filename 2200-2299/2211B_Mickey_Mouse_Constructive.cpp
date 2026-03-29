#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x, y;
  cin >> t;

  while (t--) {
    cin >> x >> y;

    int ans = 1;
    for (int i = 2; i <= abs(x - y); i++) {
      if (abs(x - y) % i == 0) ans += 1;
    }
    cout << ans << '\n';

    for (int i = 0; i < x; i++) cout << "1 ";
    for (int i = 0; i < y; i++) cout << "-1 ";
    cout << '\n';
  }
}