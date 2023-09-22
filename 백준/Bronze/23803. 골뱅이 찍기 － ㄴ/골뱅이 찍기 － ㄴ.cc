#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n * 4; i++){
		for (int i = 0; i < n; i++)
			cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		for (int i = 0; i < n * 5; i++)
			cout << "@";
		cout << "\n";
	}
}