#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> counts(n * n + 1);
    for (int i = 0, a; i < n * n; i++) {
      cin >> a;
      counts[a]++;
    }

    cout << (*max_element(counts.begin(), counts.end()) <= n * (n - 1)
                 ? "YES\n"
                 : "NO\n");
  }
}