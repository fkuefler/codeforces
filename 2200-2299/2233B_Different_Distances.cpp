#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<vector<int>> seqs = {{1, 2, 1, 2, 2, 1, 1, 2},
                                {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3}};

    for (int i = 0; i < n;) {
      if (n - i == 3) {
        for (int k : seqs[1]) cout << i + k << ' ';
        i += 3;
      } else {
        for (int k : seqs[0]) cout << i + k << ' ';
        i += 2;
      }
    }
    cout << '\n';
  }
}