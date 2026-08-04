#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, a, b, c;
  cin >> t;

  while (t--) {
    array<int, 3> arr;
    cin >> arr[0] >> arr[1] >> arr[2];

    int rounds = 0;
    while (arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]) {
        sort(arr.begin(), arr.end());
        arr[0]++, arr[2]--, rounds++;
    }

    cout << rounds << '\n';
  }
}