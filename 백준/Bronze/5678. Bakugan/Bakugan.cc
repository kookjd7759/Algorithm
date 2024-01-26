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

	while (true) {
		int n; in n;
		if (!n) break;

		int* m_arr = new int[n]; Fori(n) in m_arr[i];
		int* l_arr = new int[n]; Fori(n) in l_arr[i];
		
		int m_prev = m_arr[0], l_prev = l_arr[0];
		int M(m_prev), L(l_prev);
		int m_cnt(1), l_cnt(1);
		bool bonus = false;
		For1i(n - 1) {
			M += m_arr[i]; L += l_arr[i];
			if (m_prev == m_arr[i]) m_cnt++;
			else m_cnt = 1;
			if (l_prev == l_arr[i]) l_cnt++;
			else l_cnt = 1;
			if (!bonus && (m_cnt == 3 || l_cnt == 3)) {
				bonus = true;
				if (m_cnt == 3) M += 30;
				if (l_cnt == 3) L += 30;
			}

			m_prev = m_arr[i];
			l_prev = l_arr[i];
		}

		if (M == L) out 'T';
		else out(M > L ? 'M' : 'L');
		ent;
	}
}