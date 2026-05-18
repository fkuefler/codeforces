#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> pr(n), po(n);

    for (int i = 0; i < n; i++) {
      pr[i] = pr[max(0, i - 1)] + (s[i] == '2');
    }

    for (int i = n - 1; i >= 0; i--) {
      po[i] = po[min(i + 1, n - 1)] + (s[i] == '1' || s[i] == '3');
    }

    int keep = 0;
    for (int i = 0; i < n; i++) {
        keep = max(keep, pr[i] + po[i]);
    }

    cout << n - keep << '\n';
  }
}