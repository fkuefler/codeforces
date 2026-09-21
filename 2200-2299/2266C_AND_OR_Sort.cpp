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

    int rz = count(s.begin(), s.end(), '0'), lo = 0;

    int minOps = INT_MAX;
    if (rz == n || rz == 0) {
      minOps = 0;
    } else if (s[0] == '1') {
      minOps = rz;
    } else {
      for (int i = 0; i < n; i++) {
        s[i] == '0' ? rz-- : lo++;
        minOps = min(minOps, lo + rz);
      }
    }

    cout << minOps << '\n';
  }
}