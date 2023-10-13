#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		bool a_ = (a >= 10), b_ = (b >= 10), c_ = (c >= 10);

		cout << a << " " << b << " " << c << "\n";
		if (a_ && b_ && c_) cout << "triple-double\n\n";
		else if ((!a_ && b_ && c_) || (a_ && !b_ && c_) || (a_ && b_ && !c_))
			cout << "double-double\n\n";
		else if ((!a_ && !b_ && c_) || (a_ && !b_ && !c_) || (!a_ && b_ && !c_))
			cout << "double\n\n";
		else cout << "zilch\n\n";
	}
}