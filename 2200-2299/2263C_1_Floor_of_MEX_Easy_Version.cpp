#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    vector<int> start(n);
    iota(start.begin(), start.end(), 0);
    set<int> B(start.begin(), start.end());

    for (int i = 0; i < n; i++) {
      int k = i + 1, mexk = arr[i];
      auto it1 = B.lower_bound(mexk * k);
      auto it2 = B.lower_bound((mexk + 1) * k);
      B.erase(it1, it2);
    }

    cout << B.size() << '\n';
    for (auto& b : B) cout << b << ' ';
    cout << '\n';
  }
}