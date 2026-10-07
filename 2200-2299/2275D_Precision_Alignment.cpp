#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<array<long long, 3>> labs(n);
    for (auto& [a, b, c] : labs) cin >> a >> b >> c;

    auto ops = [&](array<long long, 3>& lab, long long goal) {
      auto [a, b, c] = lab;
      if (a + b + c >= goal) return 0LL;
      if (a > b || a > c || b > c) return goal - a - b - c;
      if (a == b && b == c) return k + 1;

      return goal + 2 * (min(min(b - a, c - b), c - a) + 1) - a - b - c;
    };

    auto check = [&](long long S) {
      long long kk = k;
      for (auto& l : labs) {
        kk -= ops(l, S);
        if (kk < 0) return false;
      }
      return true;
    };

    long long ans = LONG_LONG_MIN;
    for (long long i = LONG_LONG_MAX / 2; i > 0; i /= 2) {
      while (check(ans + i)) ans += i;
    }

    cout << ans << '\n';
  }
}