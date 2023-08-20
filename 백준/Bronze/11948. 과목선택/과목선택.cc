#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec(4);
	for (int i = 0; i < 4; i++)
		cin >> vec[i];
	sort(vec.begin(), vec.end());
	int sum = 0;
	for (int i = 1; i < 4; i++)
		sum += vec[i];

	int a, b; cin >> a >> b;
	sum += max(a, b);
	cout << sum;
}