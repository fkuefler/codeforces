#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, x, y, k;
  cin >> t;

  while (t--) {
    cin >> x >> y >> k;

    long long proj = 0, last;

    for (int i = 0; i < min(y - x + 1, k); i++) {
      long long p = (y + i) % (x + i);
      proj += p;
      last = p;
    }

    proj += last * max(0LL, k - (y - x + 1));

    cout << proj << '\n';
  }
}