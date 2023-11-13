#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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

	Testcase{
	string st_s, st_e; in st_s >> st_e;
	int start = stoi(st_s.substr(0, 2)) * 3600 
		+ stoi(st_s.substr(3, 5)) * 60
		+ stoi(st_s.substr(6, 8));
	int end = stoi(st_e.substr(0, 2)) * 3600
		+ stoi(st_e.substr(3, 5)) * 60
		+ stoi(st_e.substr(6, 8));
	int time; in time;
	time *= 60;
	int exam;
	if (end - start == 0) exam = 24 * 3600;
	else if (end - start < 0) exam = 24 * 3600 - start + end;
	else exam = end - start;

	if (exam >= time) out "Perfect";
	else if (exam + 3600 >= time) out "Test";
	else out "Fail";
	ent;
	};
}