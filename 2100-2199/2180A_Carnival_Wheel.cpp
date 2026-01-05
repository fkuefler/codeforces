#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l, a, b;
  cin >> l >> a >> b;

  std::vector<uint64_t> bits((l + 63) / 64);
  int max_prize = a;

  while (!(bits[a / 64] & (1ULL << (a % 64)))) {
    if (a == l - 1) {
      cout << a << "\n";
      return;
    }
    max_prize = max(max_prize, a);
    bits[a / 64] |= (1ULL << (a % 64));
    a = (a + b) % l;
  }

  cout << max_prize << "\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();

  return 0;
}