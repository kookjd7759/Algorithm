#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int sum = n * (n + 1) / 2;
  int sumSqrd = sum * sum;

  int sumOfCubed = 0;
  for (int i = 1; i <= n; i++)
    sumOfCubed += pow(i, 3);

  cout << sum << "\n"
       << sumSqrd << "\n"
       << sumOfCubed << "\n";

  return 0;
}