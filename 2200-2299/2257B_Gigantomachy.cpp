#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    vector<int> m1(n), m2(m);
    for (int& a : m1) cin >> a;
    for (int& b : m2) cin >> b;

    long long s1 = 0, s2 = 0;
    for (int i = 0; i < n - 1; i++) s1 += m1[i] - m1[i + 1] + 1;
    s1 += m1[n - 1];
    for (int i = 0; i < m - 1; i++) s2 += m2[i] - m2[i + 1] + 1;
    s2 += m2[m - 1];

    cout << (s1 >= s2 ? "1\n" : "2\n");
  }
}