#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x, y, z;
  cin >> t;

  while (t--) {
    cin >> x >> y >> z;

    if (x >= y && x >= z) {
      cout << string(x + y + z, 'P') << '\n';
    } else if (y >= x && y >= z) {
      cout << string(x + y + z, 'R') << '\n';
    } else {
      cout << string(x + y + z, 'S') << '\n';
    }
  }
}