#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string st; cin >> st;
	int a(0), b(0);
	for (int i = 0; i < n; i++)
		st[i] == 'A' ? a++ : b++;
	if (a == b) cout << "Tie";
	else a > b ? cout << "A" : cout << "B";
}