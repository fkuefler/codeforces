#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    string s;
    cin >> n >> s;

    int maxBlocks = 0;
    for (int split = 0; split < n; split++) {
      char last = ' ';
      int blocks = 0;
      for (int i = split; i < split + n; i++) {
        blocks += s[i % n] != last ? 1 : 0;
        last = s[i % n];
      }
      maxBlocks = max(maxBlocks, blocks);
    }

    cout << maxBlocks << '\n';
  }
}