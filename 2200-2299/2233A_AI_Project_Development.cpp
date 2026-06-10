#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, x, y, z;
  cin >> t;

  while (t--) {
    cin >> n >> x >> y >> z;

    int noAI = ceil(static_cast<double>(n) / (x + y));
    int withAI = ceil(z + static_cast<double>(n - x * z) / (x + 10 * y));

    cout << min(noAI, withAI) << '\n';
  }
}