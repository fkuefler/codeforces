#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string X, T;
  cin >> X;

  for (int i = 1; i <= n; i++) T.push_back(i & 1 ? 'a' : 'b');

  for (int i = 0, l = 0, r = n - 1; i < n; i++) {
    if (X[i] != '?') {
      if (l + n - 1 - r != i) {
        l = X[i] == 'a' ? 0 : 1;
        r = l + n - i - 1;
      }

      if (X[i] == T[l]) {
        l++;
      } else if (X[i] == T[r]) {
        r--;
      } else {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}