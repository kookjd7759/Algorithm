#include <iostream>

using namespace std;

int main() {
	while(true){
		int n; cin >> n;
		if(!n) break;
		
		for (int i = 1; i <= n; i++){
			for (int j = 0; j < i; j++) cout << "*";
			cout << "\n";
		}
	}
}
