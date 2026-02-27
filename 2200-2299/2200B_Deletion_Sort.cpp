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

    if (is_sorted(arr.begin(), arr.end())) {
      cout << arr.size() << '\n';
    } else {
      cout << 1 << '\n';
    }
  }
}