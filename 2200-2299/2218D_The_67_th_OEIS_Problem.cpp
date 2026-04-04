#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
  for (long long i = 2; i <= static_cast<long long>(ceil(sqrt(x))); i++) {
    if (x % i == 0) return false;
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
    vector<long long> primes;

    long long i = 1;
    while (primes.size() < n + 1) {
      if (isPrime(i++)) primes.push_back(i - 1);
    }

    for (int i = 0; i < n; i++) {
      cout << primes[i] * primes[i + 1] << ' ';
    }
    cout << '\n';
  }
}