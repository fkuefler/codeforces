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

    char color = 'R';
    int switches = 0;
    for (char c : s) {
      if (c != color) {
        switches++;
      } else {
        color = color == 'R' ? 'B' : 'R';
      }
    }

    cout << switches << '\n';
  }
}