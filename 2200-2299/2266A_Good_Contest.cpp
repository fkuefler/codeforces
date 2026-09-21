#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, a, b, c;
  cin >> t;

  while (t--) {
    cin >> n >> a >> b >> c;

    cout << n - min(min(a, b), c) << '\n';
  }
}