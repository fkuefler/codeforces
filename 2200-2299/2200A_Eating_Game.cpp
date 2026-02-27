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

    int maxEl = *max_element(arr.begin(), arr.end());

    cout << count(arr.begin(), arr.end(), maxEl) << '\n';
  }
}