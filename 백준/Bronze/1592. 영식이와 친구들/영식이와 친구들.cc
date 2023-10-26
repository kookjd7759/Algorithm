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
	int N[51]; memset(N, 0, sizeof(N));

	int n, m, l; in n >> m >> l;
	int idx(1), cnt(0);
	while (true) {
		N[idx]++;
		if (N[idx] >= m) break;
		cnt++;

		if (N[idx] & 1) idx += l;
		else idx -= l;

		if (idx > n) while (idx > n) idx -= n;
		else while (idx <= 0) idx += n;
	}

	out cnt;
}