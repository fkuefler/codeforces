#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    bool split = false, merge = false;

    for (int i = 1; i < s.size() - 1; i++) {
      if (s[i - 1] == s[i + 1] && s[i - 1] != s[i]) {
        merge = true;
      } else if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
        split = true;
      }
    }

    cout << 1 + split + merge << '\n';
  }
}