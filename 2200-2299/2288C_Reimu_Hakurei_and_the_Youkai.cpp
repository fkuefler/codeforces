#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, x;
  cin >> t;

  while (t--) {
    cin >> n >> x;
    vector<int> arr(n);
    for (int& a : arr) cin >> a;

    vector<int> moves(n);
    for (int i = 0; i < n; i++) {
      moves[i] = (arr[i] + x - 1) / x - 1;
    }

    sort(moves.begin(), moves.end());

    int cost = 0;
    for (int i = 0; i < n - 1; i++) {
      cost = max(cost, moves[i] - i);
    }

    cout << cost << '\n';
  }
}