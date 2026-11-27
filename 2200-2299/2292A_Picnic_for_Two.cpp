#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, l, a, b;
  cin >> t;

  while (t--) {
    cin >> l >> a >> b;
    vector<int> A(l), B(l);

    for (int i = 0;; i = (i + a) % l) {
      if (A[i] != 0) break;
      A[i] = 1;
    }

    for (int i = 0;; i = (i + b) % l) {
      if (B[i] != 0) break;
      B[i] = 1;
    }

    int ans = 0;
    for (int i = 0; i < l; i++) {
      ans += A[i] && B[i];
    }

    cout << ans << '\n';
  }
}