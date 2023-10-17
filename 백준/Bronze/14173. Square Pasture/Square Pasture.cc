#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pair<int, int> pos1[2], pos2[2];
	for (int i = 0; i < 2; i++) cin >> pos1[i].first >> pos1[i].second;
	for (int i = 0; i < 2; i++) cin >> pos2[i].first >> pos2[i].second;

	int max_x = pos1[0].first, min_x = pos1[0].first;
	int max_y = pos1[0].second, min_y = pos1[0].second;
	for (int i = 0; i < 2; i++) {
		max_x = max(max_x, pos1[i].first);
		max_x = max(max_x, pos2[i].first);
		min_x = min(min_x, pos1[i].first);
		min_x = min(min_x, pos2[i].first);

		max_y = max(max_y, pos1[i].second);
		max_y = max(max_y, pos2[i].second);
		min_y = min(min_y, pos1[i].second);
		min_y = min(min_y, pos2[i].second);
	}

	cout << max(max_x - min_x, max_y - min_y) * max(max_x - min_x, max_y - min_y);
}