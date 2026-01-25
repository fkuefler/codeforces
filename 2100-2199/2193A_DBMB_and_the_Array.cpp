#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, s, x;
  cin >> t;

  while (t--) {
    cin >> n >> s >> x;

    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    auto sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum <= s && (s - sum) % x == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}