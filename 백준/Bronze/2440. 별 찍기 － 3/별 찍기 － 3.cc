#include <iostream>

using namespace std;

int main(void) {
	int n; cin >> n; n++;
	while (n--){
		for (int i = 0; i < n; i++)
			cout << "*";
		cout << "\n";
	}
}