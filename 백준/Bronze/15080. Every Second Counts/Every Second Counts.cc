#include <iostream>

using namespace std;

int main() {
	string temp;
	int sh, sm, ss, eh, em, es;
	cin >> sh >> temp >> sm >> temp >> ss;
	cin >> eh >> temp >> em >> temp >> es;
	int start_sec = sh * 60 * 60 + sm * 60 + ss;
	int end_sec = eh * 60 * 60 + em * 60 + es;
	start_sec > end_sec ? cout << 24 * 60 * 60 - start_sec + end_sec : cout << end_sec - start_sec;
}