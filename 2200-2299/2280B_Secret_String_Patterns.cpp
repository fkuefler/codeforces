#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    auto ask = [&](int l, int r) {
      cout << "? " << l << ' ' << r << endl;
      int ans;
      cin >> ans;
      return ans;
    };

    int ones = ask(1, n);

    if (ones == n) {
      cout << "! NO" << endl;
    } else {
      if (ask(ones + 1, n) == 0) {
        cout << "! NO" << endl;
      } else {
        cout << "! YES" << endl;
      }
    }
  }
}