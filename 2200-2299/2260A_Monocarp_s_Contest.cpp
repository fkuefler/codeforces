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

    if (count(arr.begin(), arr.end(), 0) < 2) {
      cout << -1 << '\n';
    } else {
      cout << 2 - (arr[0] == 0) - (arr[n - 1] == 0) << '\n';
    }
  }
}