#include <iostream>

using namespace std;

int main() {
	int a, p; cin >> a >> p;
	if (a * 7 == p * 13) cout << "lika";
	else a * 7 > p * 13 ? cout << "Axel" : cout << "Petra";
}