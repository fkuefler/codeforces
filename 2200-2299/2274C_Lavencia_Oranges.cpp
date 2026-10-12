#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    auto check = [&](int cost) {
      int items = 0;
      for (int i = 1; i <= cost; i++) {
        items += i * (cost / i);
        if (items >= n) return true;
      }

      return false;
    };

    int minCost = INT_MAX;
    for (int i = INT_MAX / 2; i > 0; i /= 2) {
      while (check(minCost - i)) minCost -= i;
    }

    cout << minCost << '\n';

    int out = 1, used = 0;
    for (int i = minCost; i > 0; i--) {
      for (int j = 0; j < minCost / i; j++) {
        if (n - used < i) break;
        for (int k = 0; k < i; k++) {
          cout << out << ' ';
          used++;
        }
        out++;
      }
    }

    cout << '\n';
  }
}