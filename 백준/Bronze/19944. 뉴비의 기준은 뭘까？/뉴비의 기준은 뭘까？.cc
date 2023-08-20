#include <iostream>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	if (m <= n and (m != 1 and m != 2))
		cout << "OLDBIE!";
	else if (m == 1 or m == 2)
		cout << "NEWBIE!";
	else
		cout << "TLE!";
}