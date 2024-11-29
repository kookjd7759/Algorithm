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
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

struct Node {
	int color, size, idx;
};

bool comp(const Node& a, const Node& b) {
	if (a.size == b.size) return a.color < b.color;
	else return a.size < b.size;
}

int main() {
	Sync;

	int n; in n;
	vector<Node> vec(n);
	Fori(n) in vec[i].color >> vec[i].size, vec[i].idx = i;
	sort(vec.begin(), vec.end(), comp);

	int* color_dp = new int[n + 1]; Fori(n + 1) color_dp[i] = 0;
	int* ret = new int[n];
	stack<Node> command;
	Fori(n) {
		ret[vec[i].idx] = color_dp[0] - color_dp[vec[i].color];
		
		command.push(vec[i]);
		if (i != n - 1 && vec[i].size != vec[i + 1].size) {
			while (!command.empty()) {
				color_dp[0] += command.top().size;
				color_dp[command.top().color] += command.top().size;
				command.pop();
			}
		}
	}
	Fori(n)out ret[i] endl;
}