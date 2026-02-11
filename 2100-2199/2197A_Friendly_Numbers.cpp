#include <bits/stdc++.h>
using namespace std;

int digSum(int y) {
  int sum = 0;
  while (y > 0) {
    sum += y % 10;
    y /= 10;
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, x;
  cin >> t;

  while (t--) {
    cin >> x;

    int count = 0;

    for (int y = x + 1; y < x + 100; y++) {
      if (y - digSum(y) == x) count++;
    }

    cout << count << '\n';
  }
}