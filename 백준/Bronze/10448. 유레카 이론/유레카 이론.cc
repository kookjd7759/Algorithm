#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
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
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;

	vector<int> vec;
	auto func = [&](int a) -> bool {
		int size = vec.size();
		for (int i1 = 0; i1 < size; i1++) {
			int sum = vec[i1];
			if (sum > a) break;
			for (int i2 = i1; i2 < size; i2++) {
				sum += vec[i2];
				if (sum > a) break;
				for (int i3 = i2; i3 < size; i3++) {
					if (sum + vec[i3] == a) return true;
					else if (sum + vec[i3] > a) break;
				}
				sum -= vec[i2];
			}
		}
		return false;
		};
	int n = 1, add(2);
	while (n <= 1000) {
		vec.push_back(n);
		n += add++;
	}
	in n;
	Fori(n) {
		int a; in a;
		out(func(a) ? 1 : 0) endl;
	}
}