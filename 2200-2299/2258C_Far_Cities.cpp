#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    auto ask = [](int u, int v, int d) -> bool {
      cout << "? " << u << ' ' << v << ' ' << d << endl;
      int resp;
      cin >> resp;
      return resp;
    };

    auto ans = [](int u, int v, int d) -> void {
      cout << "! " << u << ' ' << v << ' ' << d << endl;
      return;
    };

    int u = 1, v = 2, d = 1;
    while (ask(u, v, d + 1)) d++;

    for (int w = 3; w <= n; w++) {
      pair<int, int> np = {u, v};
      while (ask(u, w, d + 1)) {
        d++;
        np = {u, w};
      }
      while (ask(v, w, d + 1)) {
        d++;
        np = {v, w};
      }
      u = np.first, v = np.second;
    }

    ans(u, v, d);
  }
}