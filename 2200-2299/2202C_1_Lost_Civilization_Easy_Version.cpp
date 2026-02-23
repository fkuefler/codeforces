#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> arr(n + 1, -1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    stack<int> s;

    for (int i = n; i > 0; i--) {
      while (s.size() && s.top() == arr[i] + 1) {
        s.pop();
      }
      if (arr[i] != arr[i - 1] + 1) {
        s.push(arr[i]);
      }
    }

    cout << s.size() << '\n';
  }
}