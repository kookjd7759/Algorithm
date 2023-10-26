#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int name[26];

int main() {
	Sync;
	memset(name, 0, sizeof(name));

	int n; cin >> n;
	while (n--) {
		string st; cin >> st;
		name[st[0] - 97]++;
	}

	bool ch = false;
	for (int i = 0; i < 26; i++) {
		if (name[i] >= 5) {
			cout << (char)(i + 97);
			ch = true;
		}
	}

	if (!ch) cout << "PREDAJA";
}