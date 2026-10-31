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
    multiset<int> even, odd;
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      arr[i] = a;
      if (i % 2) {
        odd.insert(a);
      } else {
        even.insert(a);
      }
    }

    long long ans = 0;
    while (odd.size() && even.size() && *(odd.begin()) < 0 &&
           *(even.begin()) < 0) {
      ans += -*(odd.begin()) + -*(even.begin());
      even.erase(even.begin());
      odd.erase(odd.begin());
    }

    while (odd.size() && even.size() &&
           (-*(odd.begin()) > *(even.begin()) ||
            -*(even.begin()) > *(odd.begin()))) {
      int nEven = -*(odd.begin());
      int nOdd = -*(even.begin());
      odd.erase(odd.begin());
      even.erase(even.begin());
      odd.insert(nOdd);
      even.insert(nEven);
    }

    ans += accumulate(odd.begin(), odd.end(), 0LL) +
           accumulate(even.begin(), even.end(), 0LL);

    cout << ans << '\n';
  }
}