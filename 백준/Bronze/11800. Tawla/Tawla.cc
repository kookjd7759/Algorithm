#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string name[6]{ "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	string doubleName[6]{ "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b; cin >> a >> b;
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}

		cout << "Case " << i << ": ";
		if (a == b) cout << doubleName[a - 1];
		else if (a + b == 11) {
			name[4] = "Beesh";
			cout << name[a - 1] << " " << name[b - 1];
			name[4] = "Bang";
		}
		else cout << name[a - 1] << " " << name[b - 1];
		cout << "\n";
	}
}