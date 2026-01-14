#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int tc, index(1); cin >> tc;
	while (tc--) {
		int  N, M; cin >> N >> M;
		vector<int> origin(N);
		map<int, int> m;
		for (int i = 0; i < N; ++i) {
			cin >> origin[i];
			if (m.count(origin[i])) m[origin[i]]++;
			else m.insert({ origin[i], 1 });
		}

		int ans(0);
		for (int i = 0; i < N; ++i) {
			if (!m.count(origin[i])) continue;
			if (M <= origin[i]) continue;

			int target = M - origin[i];
			if (m.count(target)) {
				ans++;
				m[origin[i]]--;
				m[target]--;
				if (m[origin[i]] == 0) m.erase(origin[i]);
				if (m[target] == 0) m.erase(target);
			}
		}

		cout << "Case #" << index++ << ": " << ans << "\n";
	}

	return 0;
}
