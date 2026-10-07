#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x, y, r;
  cin >> t;

  while (t--) {
    cin >> x >> y >> r;

    cout << x << ' ' << y + r << '\n';
  }
}