#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	bool ch = false;
	while (n--) {
		string st; cin >> st;
		if (!st.compare("anj")) { ch = true; break; }
	}

	ch ? cout << "뭐야;" : cout << "뭐야?";
}