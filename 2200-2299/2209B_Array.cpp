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
    for (int& a : arr) cin >> a;

    vector<int> output(n);
    for (int i = 0; i < n; i++) {
      auto lg = [&]() {
        pair<int, int> lg = {0, 0};
        for (int j = i; j < n; j++) {
          if (arr[i] < arr[j]) {
            lg.first++;
          } else if (arr[i] > arr[j]) {
            lg.second++;
          }
        }
        return lg;
      }();

      output[i] = (max(lg.first, lg.second));
    }

    for (int o : output) cout << o << ' ';
    cout << '\n';
  }
}