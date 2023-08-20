#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b; cin >> a >> b;

  if (a < b) cout << "-1\n";
  else if (a > b) cout << "1\n";
  else cout << "0\n";

  return 0;
}