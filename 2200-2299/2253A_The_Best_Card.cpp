#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << (isPrime(n + 1) ? "YES\n" : "NO\n");
  }
}