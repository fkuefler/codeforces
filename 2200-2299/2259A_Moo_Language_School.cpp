#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    string s;
    cin >> s;

    int open = 0;
    for (int i = 0; i < n; i += k) {
      for (int j = 0; j < k; j++) {
        if (s[i + j] == '0') {
          open++;
          break;
        }
      }
    }

    cout << (n / k) - open << '\n';
  }
}