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

    for (int i = 1; i < n - 1; i++) {
      if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1') {
        s[i] = '1';
      }
    }
    int maxOnes = count(s.begin(), s.end(), '1');

    for (int i = 1; i < n - 1; i++) {
      if (s[i] == '1' && s[i - 1] == '1' && s[i + 1] == '1') {
        s[i] = '0';
      }
    }
    int minOnes = count(s.begin(), s.end(), '1');

    cout << minOnes << ' ' << maxOnes << '\n';
  }
}