#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<pair<long double, long double>> tasks(n);
    for (auto& [c, p] : tasks) cin >> c >> p;

    long double maxPoints = 0.0;
    for (auto [c, p] : views::reverse(tasks)) {
      if (c > maxPoints * p / 100) {
        maxPoints = (maxPoints * (100 - p) / 100) + c;
      }
    }

    cout << setprecision(10) << maxPoints << '\n';
  }
}