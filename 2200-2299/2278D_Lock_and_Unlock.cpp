#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<long long> arr(n);
    map<long long, long long> m;
    for (long long& a : arr) {
      cin >> a;
      m[a]++;
    }

    long long ops = prev(m.end())->first - m.begin()->first;
    long long cost = 0;

    while (m.size() > 1) {
      auto it_last = prev(m.end());
      auto it_first = m.begin();
      long long fCost =
          it_first->second * (next(it_first)->first - it_first->first);
      long long eCost =
          it_last->second * (it_last->first - prev(it_last)->first);

      if (it_first->second < it_last->second) {
        cost += fCost;
        next(it_first)->second += it_first->second;
        m.erase(it_first);
      } else {
        cost += eCost;
        prev(it_last)->second += it_last->second;
        m.erase(it_last);
      }
    }

    cout << cost << ' ' << ops << '\n';
  }
}