#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n, a, b;
  cin >> t;

  while (t--) {
    cin >> n >> a >> b;

    long long cost = 0;
    if (a * 3 <= b) {
      cost = n * a;
    } else {
      cost += (n / 3) * b;
      cost += min(a * (n % 3), b);
    }

    cout << cost << '\n';
  }
}
