#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, a;
  cin >> t;

  while (t--) {
    bool found = false;

    cin >> n;
    while (n--) {
      cin >> a;
      if (a == 67) found = true;
    }

    cout << (found ? "YES\n" : "NO\n");
  }
}