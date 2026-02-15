#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> rolls(n);
    for (int& a : rolls) cin >> a;

    int ops = 0;
    for (int i = 0; i < n - 1; i++) {
      if (rolls[i] == rolls[i + 1] || rolls[i] == 7 - rolls[i + 1]) {
        ops++, i++;
      }
    }

    cout << ops << '\n';
  }
}