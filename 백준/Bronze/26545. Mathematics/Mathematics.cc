#include <iostream>

using namespace std;

int main() {
	int size; cin >> size;
	int sum = 0;
	while (size--){
		int num; cin >> num;
		sum += num;
	}
	cout << sum;
}
