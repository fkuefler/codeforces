#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, a, b, c, m, A, B, C, AB, BC, AC, ABC;
  cin >> t;

  while (t--) {
    cin >> a >> b >> c >> m;
    AB = lcm(a, b), BC = lcm(b, c), AC = lcm(a, c);
    ABC = lcm(lcm(AB, BC), AC);

    A = 2 * (m / ABC) + 3 * (m / AB + m / AC - 2 * (m / ABC)) +
        6 * (m / a - m / AB - m / AC + m / ABC);
    B = 2 * (m / ABC) + 3 * (m / AB + m / BC - 2 * (m / ABC)) +
        6 * (m / b - m / AB - m / BC + m / ABC);
    C = 2 * (m / ABC) + 3 * (m / BC + m / AC - 2 * (m / ABC)) +
        6 * (m / c - m / BC - m / AC + m / ABC);

    cout << A << ' ' << B << ' ' << C << '\n';
  }
}