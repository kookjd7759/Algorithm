#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Comp(const int x, const int y) {
	return x > y;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string num; cin >> num;
	vector<int> vec;

	for (int i = 0; i < num.size(); i++)
		vec.push_back((int)num.at(i) - 48);

	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < num.size(); i++)
		cout << vec.at(i);

    return 0;
}