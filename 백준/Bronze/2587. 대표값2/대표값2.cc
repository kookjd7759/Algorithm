#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int num; cin >> num;
		sum += num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());

	cout << sum / 5 << "\n";
	cout << vec[2];
} 
