#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<int> swords(n), monsters(n);
    for (int& a : swords) cin >> a;
    for (int& b : monsters) cin >> b;

    sort(swords.begin(), swords.end());

    int i = n, j = 0, comp = 0;
    long long maxScore = 0;
    while (i - monsters[j] >= 0 && j < n) {
      i -= monsters[j];
      j++, comp++;
      maxScore = max(maxScore, static_cast<long long>(swords[i]) * comp);
    }
    cout << maxScore << '\n';
  }
}