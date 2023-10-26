#include <iostream>
#include <string>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;
int main() {
	Sync;
	cout << fixed; cout.precision(2);
	int t; cin >> t;
	while (t--) {
		double a; cin >> a;
		string st; getline(cin, st);
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == '@') a *= 3.0;
			else if (st[i] == '%') a += 5.0;
			else if (st[i] == '#') a -= 7.0;
		}
		cout << a Endl;
	}
}