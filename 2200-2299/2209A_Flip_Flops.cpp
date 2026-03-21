#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n, c, k;
  cin >> t;

  while (t--) {
    cin >> n >> c >> k;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    sort(arr.begin(), arr.end());

    for (int a : arr) {
      if (a <= c) {
        if (k > 0) {
          long long ff = min(k, c - a);
          k -= ff, c += ff;
        }
        c += a;
      } else {
        break;
      }
    }

    cout << c << '\n';
  }
}