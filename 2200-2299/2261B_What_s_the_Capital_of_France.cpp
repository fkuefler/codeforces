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

    unsigned int ma = *max_element(arr.begin(), arr.end()),
                 mi = *min_element(arr.begin(), arr.end());

    if (mi == ma) {
      cout << mi << '\n';
    } else {
      for (int i = 30; i >= 0; i--) {
        unsigned int cand = (ma ^ (1U << i)) | ((1U << i) - 1);
        if ((ma & (1U << i)) && cand >= mi) {
          cout << (ma | cand) << '\n';
          break;
        }
      }
    }
  }
}