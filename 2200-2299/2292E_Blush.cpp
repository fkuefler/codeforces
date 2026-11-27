#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, a, x, k;
  cin >> t;

  while (t--) {
    cin >> a >> x >> k;

    auto check = [&](long long r) -> bool {
      long long sp = a + r * x;

      unsigned long long b1 = r % (k + 1);
      long long s1 = r / (k + 1) + 1;

      if (bit_width(b1) + s1 > 61) return false;

      long long c1 = ((1LL << s1) - 1) * b1;

      unsigned long long b2 = k + 1 - b1;
      long long s2 = r / (k + 1);

      if (bit_width(b2) + s2 > 61) return false;

      long long c2 = ((1LL << s2) - 1) * b2;

      return c1 + c2 < sp;
    };

    long long r = 0;
    for (long long j = 100000000; j > 0; j /= 2) {
      while (check(r + j)) r += j;
    }

    cout << a + r * x << '\n';
  }
}