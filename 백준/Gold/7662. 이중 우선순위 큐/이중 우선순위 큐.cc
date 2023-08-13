#include <iostream>
#include <queue>
#include <string>

using namespace std;
bool visit[1000001];

void Push(priority_queue<pair<int, int>>& que_Big, priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>& que_Small, const int& Value, const int& Number) {
	que_Big.push({ Value, Number });
	que_Small.push({ Value, Number });
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int TestCase; cin >> TestCase;
	while (TestCase--) {
		priority_queue<pair<int, int>> que_Big;
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que_Small;
		fill_n(visit, 1000001, false);
		int K; cin >> K;
		int Number = 0;
		while (K--) {
			string st; cin >> st;
			int num; cin >> num;

			if (st == "D") {
				if (num == 1) {
					while (!que_Big.empty() && visit[que_Big.top().second])
						que_Big.pop();

					if (!que_Big.empty()) {
						visit[que_Big.top().second] = true;
						que_Big.pop();
					}
				}
				else { // version == -1
					while (!que_Small.empty() && visit[que_Small.top().second])
						que_Small.pop();

					if (!que_Small.empty()) {
						visit[que_Small.top().second] = true;
						que_Small.pop();
					}
				}
			}
			else if (st == "I") {
				Push(que_Big, que_Small, num, Number);
				Number++;
			}
		}

		while (!que_Big.empty() && visit[que_Big.top().second])
			que_Big.pop();
		while (!que_Small.empty() && visit[que_Small.top().second])
			que_Small.pop();

		if (que_Big.empty() && que_Small.empty())
			cout << "EMPTY \n";
		else
			cout << que_Big.top().first << " " << que_Small.top().first << "\n";
	}
}