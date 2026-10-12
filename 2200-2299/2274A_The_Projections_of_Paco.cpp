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

    int pos = 0;
    for (int a : views::reverse(arr)) {
        pos = pos + 2 * (a - pos);
    }

    cout << pos / 2 << '\n';
  }
}