#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    string s;
    cin >> n >> s;

    int ops = 0;
    for (char c = 'z'; c > 'a'; c--) {
      for (int i = 0; i < n / 2; i++) {
        if ((s[i] == c && s[n - i - 1] != c) ||
            (s[i] != c && s[n - i - 1] == c)) {
          ops++;
          for (int j = 0; j < n; j++) {
            if (s[j] == c) s[j] = c - 1;
          }
          break;
        }
      }
    }

    cout << ops << '\n';
  }
}