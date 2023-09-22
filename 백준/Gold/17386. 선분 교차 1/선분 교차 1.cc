#include <iostream>

#define ll long long

using namespace std;

pair<ll, ll> pos[4];

ll CCW(pair<ll, ll> pos1, pair<ll, ll> pos2, pair<ll, ll> pos3){
	ll ret = (pos2.first - pos1.first) * (pos3.second - pos1.second)
		 - (pos2.second - pos1.second) * (pos3.first - pos1.first);
	if (ret < 0) return -1;
	else if (ret > 0) return 1;
	else return 0;
}

bool check(){
	ll ch_1 = CCW(pos[0], pos[1], pos[2]);
	ll ch_2 = CCW(pos[0], pos[1], pos[3]);
	ll ch_3 = CCW(pos[2], pos[3], pos[0]);
	ll ch_4 = CCW(pos[2], pos[3], pos[1]);
	
	if (ch_1 * ch_2 == 0 && ch_3 * ch_3 == 0){
		if ((pos[0].first >= pos[2].first && pos[0].first <= pos[3].first) ||
			(pos[1].first >= pos[2].first && pos[1].first <= pos[3].first))
			return 1;
		else return 0;
	}
	return ((ch_1 * ch_2) <= 0 && (ch_3 * ch_4) <= 0);
}

int main() {
	for (int i = 0; i < 4; i++) cin >> pos[i].first >> pos[i].second;
	for (int i = 0; i < 4; i += 2) {
		if (pos[i].first > pos[i + 1].first){
			int temp_x = pos[i].first; pos[i].first = pos[i + 1].first;
			int temp_y = pos[i].second; pos[i].second = pos[i + 1].second;
			pos[i + 1].first = temp_x;
			pos[i + 1].second = temp_y;
		}
	}
	
	check() ? cout << 1 : cout << 0;
}