#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    vector<int> arr(7);
    for (int& a : arr) cin >> a;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 6; i++) arr[i] *= -1;

    cout << accumulate(arr.begin(), arr.end(), 0) << '\n';
  }
}