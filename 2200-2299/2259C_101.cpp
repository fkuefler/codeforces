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

    int left = n - 1, right = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] != 0) {
        if (arr[i] == -1) arr[i] = 1;
        left = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] != 0) {
        if (arr[i] == -1) arr[i] = 1;
        right = i;
        break;
      }
    }

    for (int i = left + 1; i < right; i++) {
      if (arr[i] == -1) arr[i] = 0;
    }

    for (int a : arr) cout << a << ' ';
    cout << '\n';
  }
}