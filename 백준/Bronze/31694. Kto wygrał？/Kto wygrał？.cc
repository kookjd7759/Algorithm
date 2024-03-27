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

	int A[18], B[18];
	int A_sum(0), A_cnt[11]; memset(A_cnt, 0, sizeof A_cnt);
	int B_sum(0), B_cnt[11]; memset(B_cnt, 0, sizeof B_cnt);
	Fori(18) in A[i], A_sum += A[i], A_cnt[A[i]]++;
	Fori(18) in B[i], B_sum += B[i], B_cnt[B[i]]++;
	
	if (A_sum != B_sum) 
		out(A_sum > B_sum ? "Algosia" : "Bajtek");
	else {
		for (int i = 10; i > 0; i--)
			if (A_cnt[i] != B_cnt[i]) {
				out(A_cnt[i] > B_cnt[i] ? "Algosia" : "Bajtek");
				return 0;
			}
		out "remis";
	}
}