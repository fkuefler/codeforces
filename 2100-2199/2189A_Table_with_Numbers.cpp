#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, h, l;
  cin >> t;

  while (t--) {
    cin >> n >> h >> l;

    vector<int> arr(n);
    for (auto& x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    int maxSum = 0;
    for (int lf = 0, r = n - 1; lf < r; r--) {
      if ((arr[r] <= max(h, l)) && (arr[lf] <= min(h, l))) {
        maxSum++, lf++;
      }
    }

    cout << maxSum << '\n';
  }
}