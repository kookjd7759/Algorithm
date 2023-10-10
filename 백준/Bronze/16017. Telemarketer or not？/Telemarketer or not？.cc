#include <iostream>
#include <string>

using namespace std;

int main() {
	int d1, d2, d3, d4; cin >> d1 >> d2 >> d3 >> d4;
	if ((d1 == 8 || d1 == 9) && (d4 == 8 || d4 == 9) && (d2 == d3))
		cout << "ignore";
	else cout << "answer";
}
