#include <iostream>
#include <string>

using namespace std;

int main() {
	int n; cin >> n;
	string st; getline(cin, st);
	for (int i = 1; i <= n; i++) {
		getline(cin, st);
		cout << i << ". " << st << "\n";
	}
}