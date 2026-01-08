#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct int128 {
	int high, low;

};

int main() {
	Sync;

	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		bool isFind = false;
		queue<pair<int, string>> que; // remainder, str
		vector<bool> visited(N, false);
		que.push(make_pair((1 % N), "1"));
		visited[(1 % N)] = true;
		while (!que.empty()) {
			int remainder = que.front().first;
			string current = que.front().second;
			que.pop();
			if (remainder == 0) {
				cout << current << "\n";
				isFind = true;
				break;
			}


			pair<int, string> nxt_0({ (remainder * 10) % N, current + '0'});
			pair<int, string> nxt_1({ (remainder * 10 + 1) % N, current + '1'});

			if (!visited[nxt_0.first]) {
				que.push(nxt_0);
				visited[nxt_0.first] = true;
			}

			if (!visited[nxt_1.first]) {
				que.push(nxt_1);
				visited[nxt_1.first] = true;
			}
		}
		if (!isFind) cout << "BRAK\n";
	}

	return 0;
}
