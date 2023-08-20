#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	for (int i = 0; i < 5; i++) {
		int num; cin >> num;
		cout << num - a * b << " ";
	}
}