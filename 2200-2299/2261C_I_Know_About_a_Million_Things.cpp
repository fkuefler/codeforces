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

    int odd = count_if(arr.begin(), arr.end(), [](int i) { return i % 2; }),
        even = n - odd;

    if ((odd == 3 && even == 0) || (even == 1 && odd == 1)) {
      cout << "Larpity\n";
    } else {
      cout << "Moggity\n";
    }
  }
}