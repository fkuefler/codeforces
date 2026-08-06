#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    string s;
    cin >> s;

    vector<int> chunks;
    int blkSize = 1;
    for (int i = 1; i < n; i++) {
      if (s[i] != s[i - 1]) {
        chunks.push_back(blkSize);
        blkSize = 1;
      } else {
        blkSize++;
      }
    }
    chunks.push_back(blkSize);

    int off = 0, dels = 0;
    for (auto [i, chunk] : views::enumerate(chunks)) {
      dels += chunk - 1;
      off += (chunk - 1) * (i % 2 ? -1 : 1);
    }

    if (off == -3 && chunks.size() % 2 == 1) {
      off++, dels++;
    }
    if (off == -2) {
      off++, dels++;
    } else if (off == 2 && chunks.size() % 2 == 0) {
      off--, dels++;
    }

    cout << (abs(off) <= 1 ? dels : -1) << '\n';
  }
}