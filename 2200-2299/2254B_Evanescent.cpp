#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    string s;
    cin >> s;

    int fs = 1;
    for (int i = 1; i < s.size(); i++) {
      fs += s[i] != s[i - 1];
    }

    int minfs = fs;
    for (int i = 1; i < s.size() - 1; i++) {
      int fsi = fs;
      if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
        fsi--;
        if (s[i - 1] == s[i + 1]) fsi--;
      }
      minfs = min(minfs, fsi);
    }

    cout << minfs << '\n';
  }
}