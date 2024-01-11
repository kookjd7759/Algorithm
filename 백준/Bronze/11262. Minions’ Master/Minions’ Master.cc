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
    Fixed(3);

	Testcase{
        int n; in n;
        vector<double> vec(n);
        Fori(n) in vec[i];

        double sum(0.0);
        Fori(n) sum += vec[i];

        int cnt(0);
        Fori(n) if (vec[i] * n > sum) cnt++;

        out (sum / n) + 1e-10 << " ";
        out ((double)cnt / n * 100) + 1e-10 << "%\n";
	};
}