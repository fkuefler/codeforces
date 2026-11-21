#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x, y, m;
  cin >> t;

  while (t--) {
    string s;
    cin >> x >> y >> m >> s;

    int maxStones = x + y;

    for (int i = 0; i < m; i++) {
      int xx = x, yy = y;
      for (int j = 0; j <= i; j++) {
        if (s[j] == '+') {
          if (yy) {
            yy++;
          } else if (xx) {
            xx--, yy++;
          }
        } else {
          if (yy > 1 || (yy && i == j)) {
            yy--, xx++;
          } else if (xx) {
            xx--;
          } else if (yy) {
            yy--, xx++;
          }
        }
      }
      maxStones = max(maxStones, xx + yy);
    }

    cout << maxStones << '\n';
  }
}