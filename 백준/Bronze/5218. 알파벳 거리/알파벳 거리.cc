#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define endl << "\n"
#define ent cout << "\n"

using namespace std;

int main() {
	Sync;

	int t; in t;
	while (t--) {
		string a, b; in a >> b;
		out "Distances: ";
		for (int i = 0; i < a.size(); i++) {
			int an = a[i] - 65;
			int bn = b[i] - 65;
			if (an <= bn) out bn - an << " ";
			else out bn + 26 - an << " ";
		}
		ent;
	}
}