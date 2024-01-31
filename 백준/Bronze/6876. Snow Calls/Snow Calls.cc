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
	
	map<char, char> m;
	m.insert({ 'A', '2' }); m.insert({ 'B', '2' }); m.insert({ 'C', '2' });
	m.insert({ 'D', '3' }); m.insert({ 'E', '3' }); m.insert({ 'F', '3' });
	m.insert({ 'G', '4' }); m.insert({ 'H', '4' }); m.insert({ 'I', '4' });
	m.insert({ 'J', '5' }); m.insert({ 'K', '5' }); m.insert({ 'L', '5' });
	m.insert({ 'M', '6' }); m.insert({ 'N', '6' }); m.insert({ 'O', '6' });
	m.insert({ 'P', '7' }); m.insert({ 'Q', '7' }); m.insert({ 'R', '7' }); m.insert({ 'S', '7' });
	m.insert({ 'T', '8' }); m.insert({ 'U', '8' }); m.insert({ 'V', '8' });
	m.insert({ 'W', '9' }); m.insert({ 'X', '9' }); m.insert({ 'Y', '9' }); m.insert({ 'Z', '9' });
	
	Testcase{
	string st; in st;
	string ret = "";
	Fori(st.size()) {
		if ('0' <= st[i] && st[i] <= '9') ret += st[i];
		else if (isupper(st[i])) ret += m[st[i]];
	}
	out ret.substr(0, 3) << '-' << ret.substr(3, 3) << '-' << ret.substr(6, 4) endl;
	};
}