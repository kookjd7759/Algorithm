#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0);
	auto P_2 = [&](int size) -> void {
		for (int i = 0; i < size; i++) cout << "@";
		};
	auto P_s = [&](int size) -> void {
		for (int i = 0; i < size; i++) cout << " ";
		};
	int n; cin >> n;
	for (int i = 0; i < n * 2; i++){
		P_2(n); P_s(n * 3); P_2(n);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(n * 5);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(n); P_s(n * 3); P_2(n);
		cout << "\n";
	}
	for (int i = 0; i < n; i++){
		P_2(n * 5);
		cout << "\n";
	}
}