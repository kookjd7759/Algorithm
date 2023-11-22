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
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;
	
	int arr[4];
	auto swap = [&](int a, int b) -> void {
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		};
	Fori(4) arr[i] = i;
	string st; in st;
	Fori(st.size()) {
		if (st[i] == 'A') swap(1, 2);
		else if (st[i] == 'B') swap(2, 3);
		else swap(1, 3);
	}
	Fori(4) if (arr[i] == 1) out i;
}