#include <iostream>

#define ll long long

using namespace std;

pair<ll, ll> pos[4];

ll CCW(const pair<ll, ll>* pos1, const pair<ll, ll>* pos2, const pair<ll, ll>* pos3) {
	ll ret = pos1->first * pos2->second + pos2->first * pos3->second + pos3->first * pos1->second;
	ret -= pos2->first * pos1->second + pos3->first * pos2->second + pos1->first * pos3->second;

	if (ret < 0) return -1;
	else if (ret > 0) return 1;
	else return 0;
}

bool check() {
	ll ch_1 = CCW(&pos[0], &pos[1], &pos[2]) * CCW(&pos[0], &pos[1], &pos[3]);
	ll ch_2 = CCW(&pos[2], &pos[3], &pos[0]) * CCW(&pos[2], &pos[3], &pos[1]);

	if (!ch_1 && !ch_2) {
		if (pos[0] > pos[1]) swap(pos[0], pos[1]);
		if (pos[2] > pos[3]) swap(pos[2], pos[3]);
		if (pos[0] <= pos[3] && pos[1] >= pos[2]) return 1;
		else return 0;
	}
	else {
		if (ch_1 <= 0 && ch_2 <= 0) return 1;
		else return 0;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	for (int i = 0; i < 4; i++) cin >> pos[i].first >> pos[i].second;

	check() ? cout << 1 : cout << 0;
}