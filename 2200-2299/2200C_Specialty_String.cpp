#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (s.size() & 1) {
    cout << "NO\n";
    return;
  }

  stack<char> st;

  for (auto c : s) {
    if (st.size() && c == st.top()) {
      st.pop();
    } else {
      st.push(c);
    }
  }

  cout << (st.size() == 0 ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}