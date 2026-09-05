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

    array<int, 3> c{0};
    for (int a : arr) {
      if (a & 1) {
        c[0]++;
      } else if (a % 4 == 0) {
        c[1]++;
      } else {
        c[2]++;
      }
    }

    cout << *max_element(c.begin(), c.end()) << '\n';
  }
}