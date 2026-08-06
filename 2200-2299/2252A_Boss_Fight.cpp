#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> cards(n);
    for (int& a : cards) cin >> a;

    int totalDmg = accumulate(cards.begin(), cards.end(), 0);
    for (int card : cards) {
      int cc = count(cards.begin(), cards.end(), card);
      if (cc > cards.size() / 2 + 1) {
        totalDmg = totalDmg - card * cc + card * (cards.size() - cc + 2);
        break;
      }
    }

    cout << totalDmg << '\n';
  }
}