#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, k;
  cin >> t;

  while (t--) {
    cin >> k;
    vector<int> cards(k);
    for (int& c : cards) cin >> c;

    if (*max_element(cards.begin(), cards.end()) >= 3 ||
        count(cards.begin(), cards.end(), 2) >= 2) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
