#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    if (n == 1) {
      cout << 0 << '\n';
    } else {
      cout << (n + 1) / 2 << '\n';
      for (int i = 1; i < 1 + (n + 1) / 2; i++) {
        cout << i << ' ' << i + n / 2 - 1 << '\n';
      }
    }
  }
}