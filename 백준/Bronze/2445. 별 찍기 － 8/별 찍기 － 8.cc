#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i < n * 2; i++){
		for (int j = 0; j < n - abs(n - i); j++) cout << "*";
		for (int j = 0; j < abs(n - i) * 2; j++) cout << " ";
		for (int j = 0; j < n - abs(n - i); j++) cout << "*";
		cout << "\n";
	}
}