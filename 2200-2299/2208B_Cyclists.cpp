#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k, p, m;
  cin >> t;

  while (t--) {
    cin >> n >> k >> p >> m;
    vector<int> cards(n);
    for (int& c : cards) cin >> c;

    int timesPlayed = 0, winCon = cards[p - 1];
    sort(cards.begin(), cards.begin() + p - 1);

    m -= (accumulate(cards.begin(), cards.begin() + max(0, p - k), 0) + winCon);
    timesPlayed += (m >= 0);

    if (m > 0) {
      cards.erase(cards.begin() + p - 1);
      sort(cards.begin(), cards.end());
      timesPlayed +=
          m / (accumulate(cards.begin(), cards.begin() + n - k, 0) + winCon);
    }

    cout << timesPlayed << '\n';
  }
}