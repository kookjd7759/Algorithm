#include <iostream>
#include <cstring>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int aAlp[26], bAlp[26];

int main() {
	Sync;
	memset(aAlp, 0, sizeof(aAlp)); memset(bAlp, 0, sizeof(bAlp));

	string a, b; cin >> a >> b;
	for (int i = 0; i < a.size(); i++) aAlp[a[i] - 97]++;
	for (int i = 0; i < b.size(); i++) bAlp[b[i] - 97]++;

	int ret(0);
	for (int i = 0; i < 26; i++) ret += abs(aAlp[i] - bAlp[i]);
	cout << ret;
}