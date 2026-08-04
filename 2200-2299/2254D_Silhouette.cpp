#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  map<long long, vector<int>> m;
  for (long long i = 0, bi; i < n; i++) {
    cin >> bi;
    m[bi].push_back(i);
  }

  if ((*m.begin()).first != 0) {
    cout << -1 << '\n';
    return;
  }

  long long totalSum = 0, lastUsed = 0;
  vector<long long> a(n);

  pair<long long, vector<int>> last = *m.begin();
  m.erase(m.begin());

  while (m.size()) {
    auto curr = *m.begin();
    m.erase(m.begin());

    long long inc = curr.first - totalSum;
    if (inc % last.second.size() != 0 ||
        (curr.first - totalSum) / last.second.size() <= lastUsed) {
      cout << -1 << '\n';
      return;
    }

    for (int pos : last.second) {
      a[pos] = (curr.first - totalSum) / last.second.size();
      lastUsed = a[pos];
    }
    totalSum += inc;

    last = curr;
  }

  for (int pos : last.second) a[pos] = lastUsed + 1;

  for (auto ai : a) cout << ai << ' ';
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}