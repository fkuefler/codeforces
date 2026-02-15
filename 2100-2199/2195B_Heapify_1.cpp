#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> perm(n + 1);
  for (int i = 1; i <= n; i++) cin >> perm[i];

  for (int i = 1; i <= n / 2; i++) {
    int j = i;
    while (j > 0 && perm[j] > perm[j * 2]) {
      swap(perm[j], perm[j * 2]);
      j /= 2;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (perm[i] != i) {
      cout << "NO\n";
      return;
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