#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, x1, x2, k;
  cin >> t;

  while (t--) {
    cin >> n >> x1 >> x2 >> k;
    if (n <= 3) {
      cout << 1 << '\n';
    } else {
      cout << k + min(abs(x1 - x2), abs(min(x1, x2) + n - max(x1, x2))) << '\n';
    }
  }
}