#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0);
	int n; cin >> n;
	auto P_2 = [&](int size) -> void {
		for (int i = 0; i < n * size; i++) cout << "@";
		};
	auto P_s = [&](int size) -> void {
		for (int i = 0; i < n * size; i++) cout << " ";
		};
	for (int i = 0; i < n; i++){
		P_2(5);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(1);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(5);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(1);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(1);
		cout << "\n";
	}
}