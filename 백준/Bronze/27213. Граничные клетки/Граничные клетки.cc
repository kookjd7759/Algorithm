#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b; cin >> a >> b;
	if (a >= 3 && b >= 3) cout << a * b - ((a - 2) * (b - 2));
	else cout << a * b;
}