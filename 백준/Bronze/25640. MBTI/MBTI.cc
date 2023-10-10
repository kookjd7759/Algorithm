#include <iostream>

using namespace std;

int main() {
	string my; cin >> my;
	int n, ret(0); cin >> n;
	while(n--){ string temp; cin >> temp; if (!my.compare(temp)) ret++;}
	cout << ret;
}
