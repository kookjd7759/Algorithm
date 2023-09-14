#include <iostream>

using namespace std;

int main() {
	long int A(1), B(0);
	int k; cin >> k;
	while(k--){
		long int tempA_B = A;
		A = B;
		B += tempA_B;
	}
	cout << A << " " << B;
}