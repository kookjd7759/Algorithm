#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool compare(const pair<string, int> a, const pair<string, int> b) {
	if (a.second != b.second)
		return a.second > b.second;

	if (a.first.length() != b.first.length())
		return a.first.length() > b.first.length();

	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int size, len; cin >> size >> len;
	map<string, int> map_;
	while (size--) {
		string st; cin >> st;
		if (st.length() < len)
			continue;

		if (map_.find(st) == map_.end())
			map_.insert({ st, 1 });
		else 
			map_[st]++;
	}


	vector<pair<string, int>> vec;
	for (auto iter : map_) 
		vec.push_back({ iter.first , iter.second });

	sort(vec.begin(), vec.end(), compare);

	for (auto iter : vec)
		cout << iter.first << "\n";
}