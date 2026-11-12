#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<int> arr(n);
    for (int& a : arr) {
      cin >> a;
      a %= 2;
    }

    int p = 0;
    for (int i = n - 1; i >= 0; i--) {
      arr[i] = (arr[i] + p) % 2;
      p = (p + arr[i]) % 2;
      if (i + k < n) p = (p + arr[i + k]) % 2;
    }

    cout << (accumulate(arr.begin(), arr.end(), 0) % 2 ? "Alice" : "Bob")
         << '\n';
  }
}