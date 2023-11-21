#include <bits/stdc++.h>

using namespace std;

int main() {
	auto win = [&](char me, char op) -> bool {
		if (me == 'S' && op == 'P') return true;
		else if (me == 'R' && op == 'S') return true;
		else if (me == 'P' && op == 'R') return true;
		return false;
		};

	char a[2], b[2];
	cin >> a[0] >> a[1] >> b[0] >> b[1];

	if ((win(a[0], b[0]) && win(a[0], b[1])) ||
		(win(a[1], b[0]) && win(a[1], b[1]))) cout << "MS";
	else if ((win(b[0], a[0]) && win(b[0], a[1])) ||
		(win(b[1], a[0]) && win(b[1], a[1]))) cout << "TK";
	else cout << "?";
	
}