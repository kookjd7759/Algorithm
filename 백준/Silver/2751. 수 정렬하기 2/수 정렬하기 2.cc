#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Comp(int x, int y) {
	return x < y;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int ans;
	vector<int> vec;

	for (int i = 0; i < N; i++) {
		cin >> ans;
		vec.push_back(ans);
	}

	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < vec.size(); i++) 
		cout << vec.at(i) << "\n";

    return 0;
}