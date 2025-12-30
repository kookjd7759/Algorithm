#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int N, W, L; cin >> N >> W >> L;
	vector<int> trucks(N);
	for (int i = 0; i < N; ++i) cin >> trucks[i];

	int time(1), weight(trucks[0]), idx(1);
	queue<pair<int, int>> que; // weight, time
	que.push(make_pair(trucks[0], 0));
	while (!que.empty()) {
		if (time - que.front().second == W) {
			weight -= que.front().first;
			que.pop();
		}
		if (que.size() < W && idx < N && weight + trucks[idx] <= L) {
			weight += trucks[idx];
			que.push(make_pair(trucks[idx++], time));
		}
		time++;
	}
	cout << time;

	return 0;
}
