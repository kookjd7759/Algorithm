#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

char str[50];

int main() {
    Sync;

	int idx(0);
	while (true) { idx++;
		int a, b; string op;
		in a >> op >> b;
		if (op[0] == 'E') break;
		bool ch;
		if (op[0] == '!') ch = a != b;
		else if (op[0] == '=') ch = a == b;
		else if (op[0] == '<') 
			ch = (op.size() == 2 ? a <= b : a < b);
		else if (op[0] == '>') 
			ch = (op.size() == 2 ? a >= b : a > b);

		out "Case " << idx << ": " << (ch ? "true" : "false") endl;
	}
}