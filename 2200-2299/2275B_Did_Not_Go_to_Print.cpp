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

    stack<int> st;
    vector<bool> printed(n + 1);

    for (int i = 1; i <= n; i++) {
      char c = s[i - 1];
      if (c == '1') {
        st.push(i);
      } else if (c == '2') {
        if (st.size()) {
          printed[st.top()] = true;
          st.pop();
        } else {
          printed[i] = true;
        }
      } else {
        printed[i] = true;
      }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
      if (!printed[i]) ans.push_back(i);
    }

    cout << ans.size() << '\n';
    for (int a : ans) cout << a << ' ';
    cout << '\n';
  }
}