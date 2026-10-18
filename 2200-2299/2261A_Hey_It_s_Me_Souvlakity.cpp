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

    if (count(s.begin(), s.end(), '1') == 2) {
      cout << 1 << '\n';
    } else {
      cout << s.find_last_of('1') - s.find_first_of('1') << '\n';
    }
  }
}