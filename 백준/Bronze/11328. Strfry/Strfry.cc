#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)

using namespace std;

int main() {
	Sync;

	int t; in t;
	while (t--) {
		int c1[26], c2[26];
		memset(c1, 0, sizeof(c1)); memset(c2, 0, sizeof(c2));
		string st1, st2; in st1 >> st2;
		Fori(st1.size()) c1[st1[i] - 97]++;
		Fori(st2.size()) c2[st2[i] - 97]++;

		bool ch = true;
		Fori(26) if (c1[i] != c2[i]) ch = false;

		ch ? out "Possible" : out "Impossible";
		ent;
	}
}