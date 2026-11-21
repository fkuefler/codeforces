#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    string s = "";
    for (int i = 0; i < 300; i++) s.append("+--");
    cout << s << endl;

    int k;
    cin >> k;

    int y = (count(s.begin(), s.begin() + k, '+'));

    cout << n + y << endl;
  }
}