#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec;
	for (int i = 0; i < 3; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());

	int result = vec[0] + vec[1];

	if (vec[0] + vec[1] - 1 < vec[2])
		result += vec[0] + vec[1] - 1;
	else
		result += vec[2];

	cout << result;
}