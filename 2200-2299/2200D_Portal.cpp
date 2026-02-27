#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, x, y;
  cin >> t;

  while (t--) {
    cin >> n >> x >> y;
    vector<int> lr(n - y + x), mid(y - x);
    for (int i = 0; i < x; i++) cin >> lr[i];
    for (int i = 0; i < y - x; i++) cin >> mid[i];
    for (int i = x; i < n - y + x; i++) cin >> lr[i];

    auto midPiv = min_element(mid.begin(), mid.end());
    rotate(mid.begin(), midPiv, mid.end());

    bool midPrinted = false;
    for (int p : lr) {
      if (mid[0] < p && !midPrinted) {
        for (int m : mid) cout << m << ' ';
        midPrinted = true;
      }
      cout << p << ' ';
    }
    if (!midPrinted) {
      for (int m : mid) cout << m << ' ';
    }
    cout << '\n';
  }
}