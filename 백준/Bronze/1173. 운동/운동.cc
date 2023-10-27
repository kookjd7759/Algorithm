#include <iostream>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)

using namespace std;

int main() {
	Sync;

	int N, m, M, T, R; in N >> m >> M >> T >> R;
	int p = m, t(0), x(0);
	if (T > M - m) out - 1;
	else {
		while (x < N) {
			t++;
			if (p + T <= M) {
				p += T;
				x++;
			}
			else p - R < m ? p = m : p -= R;
		}
		out t;
	}
}