#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, x;
  cin >> t;

  while (t--) {
    cin >> n >> x;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    auto primeDivs = [&](int i) {
      vector<int> divs;
      for (int d = 2; d * d <= i; d++) {
        if (i % d == 0) {
          divs.push_back(d);
          while (i % d == 0) i /= d;
        }
      }
      if (i > 1) divs.push_back(i);
      return divs;
    };

    long long maxCoins = 0;
    for (int& pd : primeDivs(x)) {
      maxCoins = max(maxCoins, accumulate(arr.begin(), arr.end(), 0LL,
                                          [&](long long s, int a) {
                                            return a % pd == 0 ? s + a : s;
                                          }));
    }

    cout << maxCoins << '\n';
  }
}