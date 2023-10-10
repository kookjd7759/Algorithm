#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec(3);

int main() {
	cin >> vec[0] >> vec[1] >> vec[2];
	sort(vec.begin(), vec.end());
	cout << vec[1] + vec[2];
}
