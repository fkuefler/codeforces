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
    for (long long& a : arr) cin >> a;

    long long s = accumulate(arr.begin(), arr.end(), 0LL);
    long long minTime = s;

    vector<long long> ps(n, arr[0]);
    for (int i = 1; i < n; i++) ps[i] = ps[i - 1] + arr[i];

    int l = 0, r = n - 1;
    while (l < r - 1) {
      long long lc = ps[r - 1], rc = s - ps[l];
      long long c2 = s - ps[r - 1] + ps[l];

      minTime = min(minTime, max(max(lc, rc), c2));

      if (lc < rc) {
        l++;
      } else {
        r--;
      }
    }

    cout << minTime << '\n';
  }
}