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

    int c = count(arr.begin(), arr.end(), 1);
    int s = accumulate(arr.begin(), arr.end(), 0);
    
    if (c == n) {
      cout << -1 << '\n';
    } else if (c == n - 1) {
      if (arr.front() != 1 || arr.back() != 1) {
        cout << s - n + 1 << '\n';
      } else {
        cout << s - 1 << '\n';
      }
    } else if (c == n - 2) {
      if (arr.front() != 1 && arr.back() != 1) {
        cout << s - n + 1 << '\n';
      } else {
        cout << s - 1 << '\n';
      }
    } else {
      cout << s - 1 << '\n';
    }
  }
}