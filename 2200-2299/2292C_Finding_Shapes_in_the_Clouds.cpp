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

    bool a1 = true, a2 = true;
    for (int i = 0; i < n; i += 2) {
      if (s[i] != '1') a1 = false;
      if (s[i] != '0') a2 = false;
    }

    for (int i = 1; i < n; i += 2) {
      if (s[i] != '0') a1 = false;
      if (s[i] != '1') a2 = false;
    }

    if (n % 2 || a1 || a2) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
}