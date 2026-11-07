#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<int> a(n), b(n);
    
    int aEven = 0, bEven = 0;
    for (int& ai : a) {
      cin >> ai;
      if (ai % 2 == 0) aEven++;
    }
    for (int& bi : b) {
      cin >> bi;
      if (bi % 2 == 0) bEven++;
    }

    if (k % 2) {
      cout << (aEven >= bEven ? "YES" : "NO") << '\n';
    } else {
      cout << (aEven <= bEven ? "YES" : "NO") << '\n';
    }
  }
}