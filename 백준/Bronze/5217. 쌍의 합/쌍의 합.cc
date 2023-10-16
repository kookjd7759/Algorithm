#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int num; cin >> num;
		cout << "Pairs for " << num << ": ";
		bool com = false;;
		for (int i = 1; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				if (i != j && i + j == num) {
					if (com) cout << ", ";
					cout << i << " " << j;
					com = true;
				}
			}
		}
		cout << "\n";
	}
}