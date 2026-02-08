#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<pair<int, int>> cards(n);

  for (int i = 0; i < n; i++) {
    cin >> cards[i].first;
    cards[i].second = i;
  }

  sort(cards.begin(), cards.end());

  for (int i = 0; i < n - 1; i++) {
    if (abs(cards[i].second - cards[i + 1].second) % 2 == 0) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}