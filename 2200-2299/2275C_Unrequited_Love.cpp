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

    map<long long, long long> m;
    long long ans = 0;
    
    for (int i = 0; i < n - 4; i++) {
      long long comp = m[arr[i] + arr[i + 2] - arr[i + 4]];
      if (i - 2 >= 0 &&
          arr[i - 2] + arr[i] - arr[i + 2] == arr[i] + arr[i + 2] - arr[i + 4])
        comp--;
      if (i - 4 >= 0 &&
          arr[i - 4] + arr[i - 2] - arr[i] == arr[i] + arr[i + 2] - arr[i + 4])
        comp--;
      ans += comp;
      m[arr[i] + arr[i + 2] - arr[i + 4]]++;
    }

    cout << ans << '\n';
  }
}