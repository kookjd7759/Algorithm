#include <iostream>
#include <vector>

#define ll long long

using namespace std;

struct Line {
	pair<ll, ll> start;
	pair<ll, ll> end;
};

Line line[2];
vector<int> group;

void find_intersection(Line L1, Line L2) {
	long double px = (L1.start.first * L1.end.second - L1.start.second * L1.end.first) * 
		(L2.start.first - L2.end.first) - (L1.start.first - L1.end.first) * 
		(L2.start.first * L2.end.second - L2.start.second * L2.end.first);
	long double py = (L1.start.first * L1.end.second - L1.start.second * L1.end.first) *
		(L2.start.second - L2.end.second) - (L1.start.second - L1.end.second) * 
		(L2.start.first * L2.end.second - L2.start.second * L2.end.first);
	long double p = (L1.start.first - L1.end.first) * (L2.start.second - L2.end.second) -
		(L1.start.second - L1.end.second) * (L2.start.first - L2.end.first);

	if (p == 0) {
		if (L1.end == L2.start && L1.start <= L2.start) cout << L1.end.first << " " << L1.end.second << '\n';
		else if (L1.start == L2.end && L2.start <= L1.start) cout << L1.start.first << " " << L1.start.second << '\n';
	}
	else {
		long double x = px / p;
		long double y = py / p;

		cout << fixed;
		cout.precision(16);
		cout << x << " " << y;
	}
}

ll CCW(const pair<ll, ll>* pos1, const pair<ll, ll>* pos2, const pair<ll, ll>* pos3) {
	ll ret = pos1->first * pos2->second + pos2->first * pos3->second + pos3->first * pos1->second;
	ret -= pos2->first * pos1->second + pos3->first * pos2->second + pos1->first * pos3->second;

	if (ret < 0) return -1;
	else if (ret > 0) return 1;
	else return 0;
}

void check(Line L1, Line L2) {
	ll ch_1 = CCW(&L1.start, &L1.end, &L2.start) * CCW(&L1.start, &L1.end, &L2.end);
	ll ch_2 = CCW(&L2.start, &L2.end, &L1.start) * CCW(&L2.start, &L2.end, &L1.end);

	if (!ch_1 && !ch_2) {
		if (L1.start > L1.end) swap(L1.start, L1.end);
		if (L2.start > L2.end) swap(L2.start, L2.end);
		if (L1.start <= L2.end && L1.end >= L2.start) {
			cout << 1 << "\n";
			find_intersection(L1, L2);
		}
		else cout << 0;
	}
	else {
		if (ch_1 <= 0 && ch_2 <= 0) {
			cout << 1 << "\n";
			find_intersection(L1, L2);
		}
		else cout << 0;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	for (int i = 0; i < 2; i++) {
		cin >> line[i].start.first >> line[i].start.second;
		cin >> line[i].end.first >> line[i].end.second;
	}

	check(line[0], line[1]);
}