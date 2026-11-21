#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x;
  cin >> t;

  while (t--) {
    cin >> x;

    int best = x;
    for (int i = 1; i < x; i++) {
      int sum = 0;
      for (int j = i; j > 0; j--) {
        sum += j;
        if (sum >= x) {
          best = min(best, i + i - j);
          break;
        }
      }
    }

    cout << best << '\n';
  }
}