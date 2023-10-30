#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>

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

bool a_list[100000], b_list[100000];
char ret[100002];

int main() {
	Sync;

	string a, b; in a >> b;
	Fori(a.size()) a_list[i] = (a[i] == '1');
	Fori(b.size()) b_list[i] = (b[i] == '1');

	
	Fori(a.size()) ret[i] = (a_list[i] & b_list[i]) + '0'; out ret endl;
	Fori(a.size()) ret[i] = (a_list[i] | b_list[i]) + '0'; out ret endl;
	Fori(a.size()) ret[i] = (a_list[i] != b_list[i]) + '0'; out ret endl;
	Fori(a.size()) ret[i] = (!a_list[i]) + '0'; out ret endl;
	Fori(a.size()) ret[i] = (!b_list[i]) + '0'; out ret endl;
}