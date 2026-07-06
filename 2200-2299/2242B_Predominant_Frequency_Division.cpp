#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int& a : arr) cin >> a;

  int first = 0, second = 0;
  for (int i = 0; i < n - 2; i++) {
    first += arr[i] == 1 ? 1 : -1;
    if (first >= 0) {
      second = 0;
      for (int j = i + 1; j < n - 1; j++) {
        second += arr[j] != 3 ? 1 : -1;
        if (second >= 0) {
          cout << "YES\n";
          return;
        }
      }
    }
  }

  cout << "NO\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}