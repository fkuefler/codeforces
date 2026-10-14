#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, a, b;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    if (a <= b) {
      cout << -1 << '\n';
    } else {
      cout << min(a - b, b) << '\n';
    }
  }
}