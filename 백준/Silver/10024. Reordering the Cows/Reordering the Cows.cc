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

	int n; in n;
	int* arr_ori = new int[n + 1];
	int* arr = new int[n + 1];
	For1i(n) in arr_ori[i];
	For1i(n) {
		int a; in a;
		For1j(n) if (arr_ori[j] == a) arr[j] = i;
	}

	bool* visited = new bool[n + 1];
	Fori(n + 1) visited[i] = false;

	int cycleCnt(0), maxiLen(0), idx(1);
	while (idx <= n) {
		if (visited[idx]) idx++;
		else {
			int len(0);
			while (!visited[idx]) {
				visited[idx] = true;
				idx = arr[idx];
				len++;
			}
			if (len >= 2) cycleCnt++;
			maxiLen = max(maxiLen, len);
		}
	}
	if (maxiLen == 1) out cycleCnt spc -1;
	else out cycleCnt spc maxiLen;
}