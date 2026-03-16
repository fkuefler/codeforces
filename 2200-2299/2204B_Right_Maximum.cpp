#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    stack<int> s;

    for (int i = 0, a; i < n; i++) {
      cin >> a;
      if (!s.size() || s.top() <= a) s.push(a);
    }
    cout << s.size() << '\n';
  }
}