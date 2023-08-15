#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> vec;
	for (int i = 1; i < (n / 2 + 1); i++)
		if (n % i == 0)
			vec.push_back(i);
	vec.push_back(n);

	if (k > vec.size())
		cout << 0;
	else
		cout << vec.at(k - 1);
}