#include <iostream>
#include <vector>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		vector<int> vec(n + 1, -1);
		vector<int> group(n + 1, -1);
		vector<bool> visit(n + 1, false);
		for (int i = 1; i <= n; ++i) cin >> vec[i];

		int ans(0), idx(0);
		for (int i = 1; i <= n; ++i) {
			if (visit[i]) continue;

			stack<int> st;
			st.push(i);
			visit[i] = true;
			group[i] = idx;
			int parent = -1;
			while (true) {
				int cur = st.top();
				int target = vec[cur];
				if (visit[target]) {
					if (group[target] == idx)
						parent = target;
					break;
				}
				st.push(target);
				visit[target] = true;
				group[target] = idx;
			}
			if (parent != -1) {
				while (true) {
					int cur = st.top(); st.pop();
					if (cur == parent) break;
				}
			}
			ans += st.size();
			idx++;
		}
		cout << ans << "\n";
	}

	return 0;
}
