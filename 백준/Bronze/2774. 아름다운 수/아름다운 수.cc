#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
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
#define Testcase int t; in t; while(t--) 

using namespace std;

int main() {
	Sync;

	Testcase{
	bool ch[10]; memset(ch, false, sizeof(ch));
	string st; in st;
	Fori(st.size()) ch[st[i] - 48] = true;
	int ret(0);
	Fori(10) if (ch[i]) ret++;
	out ret endl;
	}
}