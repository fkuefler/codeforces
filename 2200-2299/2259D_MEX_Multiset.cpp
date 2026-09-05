#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      arr[i] = {a, i};
    }

    sort(arr.begin(), arr.end());

    string ans(n, ' ');
    int mexA = 0, mexB = 0, mexC = 0;
    
    for (int i = 0, pos = 0; i < n; i++) {
      int count = 0;
      while (pos < arr.size() && arr[pos].first == i) {
        count++;
        if (count == 1) {
          ans[arr[pos++].second] = 'A';
          mexA = i + 1;
        } else if (count == 2) {
          ans[arr[pos++].second] = 'B';
          mexB = i + 1;
        } else {
          ans[arr[pos++].second] = 'C';
          mexC = i + 1;
        }
      }
      if (count < 3) {
        while (pos < n) ans[arr[pos++].second] = 'C';
        break;
      }
    }

    if (mexA + mexB + mexC >= 2 * max(mexA, max(mexB, mexC))) {
      cout << "YES\n" << ans << '\n';
    } else {
      cout << "NO\n";
    }
  }
}