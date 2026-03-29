#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    for (int i = 0, p; i < n; i++) {
      cin >> p;
      cout << min(n, 2) << ' ';
    }
    cout << '\n';
  }
}