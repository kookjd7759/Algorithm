#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"

using namespace std;

int main() {
	Sync;
	int eng[26];
	memset(eng, 0, sizeof(eng));

	char c;
	int maxCnt(0);
	while (in c) {
		eng[c - 97]++;
		if (eng[c - 97] > maxCnt) maxCnt = eng[c - 97];
	}
	for (int i = 0; i < 26; i++)
		if (maxCnt == eng[i]) out (char)(i + 97);
}