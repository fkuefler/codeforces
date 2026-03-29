#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    for (int i = n; i > 0; i--) {
      cout << i << ' ';
    }
    cout << '\n';
  }
}