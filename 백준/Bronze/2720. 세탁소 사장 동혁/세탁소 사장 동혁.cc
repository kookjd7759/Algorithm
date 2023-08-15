#include <iostream>
#include <stack>

using namespace std;

int main() {
	int size; cin >> size;
	while (size--){
		int q = 0, d = 0, n = 0, p = 0;
		int num; cin >> num;
		while (num >= 25) {
			num -= 25;
			q++;
		}
		while (num >= 10) {
			num -= 10;
			d++;
		}
		while (num >= 5) {
			num -= 5;
			n++;
		}
		while (num >= 1) {
			num -= 1;
			p++;
		}
		cout << q << " " << d << " " << n << " " << p << "\n";
	}

}