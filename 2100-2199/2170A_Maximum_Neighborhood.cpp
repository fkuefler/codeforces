#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    if (n == 1) {
      cout << 1 << "\n";
    } else if (n == 2) {
      cout << 9 << "\n";
    } else if (n < 5) {
      cout << 4 * (n * n) - n - 4 << "\n";
    } else {
      cout << 5 * ((n * n) - n - 1) << "\n";
    }
  }
}