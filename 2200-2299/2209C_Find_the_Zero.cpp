#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, resp;
  cin >> n;

  for (int i = 1; i < n * 2 - 1; i += 2) {
    cout << '?' << ' ' << i << ' ' << i + 1 << endl;
    cin >> resp;
    if (resp == 1) {
      cout << '!' << ' ' << i << endl;
      return;
    }
  }

  cout << '?' << ' ' << 2 * n - 1 << ' ' << 2 * n - 2 << endl;
  cin >> resp;
  if (resp == 1) {
    cout << '!' << ' ' << 2 * n - 1 << endl;
    return;
  }
  cout << '?' << ' ' << 2 * n - 1 << ' ' << 2 * n - 3 << endl;
  cin >> resp;
  if (resp == 1) {
    cout << '!' << ' ' << 2 * n - 1 << endl;
    return;
  }
  cout << '!' << ' ' << 2 * n << endl;
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();
}