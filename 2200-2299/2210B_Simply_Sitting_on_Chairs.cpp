#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> perm(n);
    for (int& p : perm) cin >> p;

    int maxChairs = 0;
    for (int i = 0; i < n; i++) {
      if (perm[i] <= i + 1) maxChairs++;
    }

    cout << maxChairs << '\n';
  }
}