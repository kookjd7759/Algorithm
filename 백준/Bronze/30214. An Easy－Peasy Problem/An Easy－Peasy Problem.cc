#include <iostream>

using namespace std;

int main() {
	int s1, s2; cin >> s1 >> s2;
	if (s2 & 1) s2++;
	s1 < s2 / 2 ? cout << "H" : cout << "E";
}
