#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i < n * 2; i++){
		int f = abs(n - i);
		for (int j = 0; j < n - f; j++) cout << "*";
		for (int j = 0; j < f * 2; j++) cout << " ";
		for (int j = 0; j < n - f; j++) cout << "*";
		cout << "\n";
	}
}