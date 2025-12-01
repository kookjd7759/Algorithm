#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

	int idx(1);
	while (true) {
		int eng_a[26]; memset(eng_a, 0, sizeof(eng_a));
		int eng_b[26]; memset(eng_b, 0, sizeof(eng_b));
		
		string a, b; in a >> b;
		if (a == "END" && b == "END") break;

		Fori(a.size()) eng_a[a[i] - 'a']++;
		Fori(b.size()) eng_b[b[i] - 'a']++;

		bool isSame(true);
		Fori(26) if (eng_a[i] != eng_b[i]) {
			isSame = false;
			break;
		}
		out "Case " << idx++ << ": " << (isSame ? "same" : "different") endl;
	}
}
