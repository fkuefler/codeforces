#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long p, q;
    cin >> p >> q;

    if (p >= q || p * 3 < q * 2) {
      cout << "Alice\n";
    } else {
      cout << "Bob\n";
    }
  }
}