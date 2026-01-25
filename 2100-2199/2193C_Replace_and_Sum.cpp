#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, q, l, r;
  cin >> t;

  while (t--) {
    cin >> n >> q;

    vector<int> arrA(n), arrB(n);
    for (int& a : arrA) cin >> a;
    for (int& b : arrB) cin >> b;
    arrA.push_back(0);

    int ai = 0;
    for (int i = n - 1; i >= 0; i--) {
      ai = max(max(ai, arrB[i]), arrA[i]);
      arrA[i] = arrA[i + 1] + ai;
    }

    while (q--) {
      cin >> l >> r;
      cout << arrA[l - 1] - arrA[r] << ' ';
    }
    cout << '\n';
  }
}