#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; bool w; cin >> n >> w; n--;
	if (n > 5) cout << "Love is open door";
	else {
		while (n--) {
			cout << !w << "\n";
			w ? w = 0 : w = 1;
		}
	}
}