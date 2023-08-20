#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  double cntRevolution = n / 4.0;

  cout.setf(ios::fixed); cout.precision(2);
  cout << cntRevolution << "\n";

  return 0;
}