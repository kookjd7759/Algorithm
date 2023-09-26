#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Data {
	int y, m, d;
	string name;
};

bool comp(const Data& a, const Data& b){
	if (a.y == b.y)
		if (a.m == b.m) return a.d > b.d;
		else return a.m > b.m;
	else return a.y > b.y;
}

vector<Data> vec;

int main() {
	int n; cin >> n;
	while (n--) {
		string name; cin >> name;
		int d, m, y; cin >> d >> m >> y;
		Data data; data.name = name; data.y = y; data.m = m; data.d = d;
		vec.push_back(data);
	}
	sort(vec.begin(), vec.end(), comp);
	cout << vec[0].name << "\n" << vec[vec.size() - 1].name;
}