#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n);
    for (int& w : arr) cin >> w;

    array<int, 3> counts{};
    for (int w : arr) counts[w]++;

    cout << counts[0] + min(counts[1], counts[2]) +
                (abs(counts[1] - counts[2])) / 3
         << '\n';
  }
}