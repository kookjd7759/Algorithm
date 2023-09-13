#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int result = 6;
	for (int i = 11; i <= n; i++)
		result *= i;
	cout << result;
}