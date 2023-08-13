#include <iostream>

using namespace std;

int main() {
	int Arr[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		int num; cin >> num;
		Arr[i] -= num;
	}

	for (int i = 0; i < 6; i++)
		cout << Arr[i] << " ";
}