#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Comp(pair<int, int> x, pair<int, int> y) {
	if (x.first != y.first)
		return x.first < y.first;
	else
		return x.second < y.second;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<pair<int, int>> vec;

	for (int i = 0; i < N; i++) {
		pair<int, int> p;
		cin >> p.first >> p.second;

		vec.push_back(p);
	}

	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < vec.size(); i++) 
		cout << vec.at(i).first << " " << vec.at(i).second << "\n";

    return 0;
}