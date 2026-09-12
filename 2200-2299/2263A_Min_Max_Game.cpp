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

    if (count(arr.begin(), arr.end(), 1) >= (n + 1) / 2) {
      cout << "Bessie\n";
    } else {
      cout << "Elsie\n";
    }
  }
}