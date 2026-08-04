#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  multiset<long long> nums;
  for (int i = 0, bi; i < n; i++) {
    cin >> bi;
    nums.insert(bi);
  }

  vector<long long> a{0};

  while (nums.size()) {
    auto it = nums.upper_bound(-1 * a.back());
    if (it == nums.end()) {
        cout << -1 << '\n';
        return;
    }

    a.push_back(a.back() + *it);
    nums.erase(it);
  }

  for (int i = 1; i < a.size(); i++) cout << a[i] << ' ';
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}