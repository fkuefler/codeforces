#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    if (n <= 3) {
      cout << n << '\n';
    } else {
      cout << n % 2 << '\n';
    }
  }
}