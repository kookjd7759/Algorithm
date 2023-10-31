#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>
#include <map>

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

int main() {
	Sync;

	int N, M, sum(0), arr[1000]; in N >> M;
	Fori(M) in arr[i];
	auto check = [&](int x) -> bool {
		Fori(M) if (x % arr[i] == 0) return true;
		return false;
		};

	For1i(N) if (check(i)) sum += i;
	
	out sum;
}