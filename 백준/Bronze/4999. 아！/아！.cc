#include <iostream>

using namespace std;

int main() {
	string st1, st2; cin >> st1 >> st2;
	if (st1.length() >= st2.length())
		cout << "go\n";
	else
		cout << "no\n";
}