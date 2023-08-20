#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int size; cin >> size;
	if (!size)
		cout << 0;
	else {
		int non = floor(((double)size / 100.0 * 15.0) + 0.5);
		vector<int> vec(size);
		for (int i = 0; i < size; i++) 
			cin >> vec[i];

		sort(vec.begin(), vec.end());

		int sum = 0;
		for (int i = non; i < size - non; i++) {
			sum += vec[i];
		}

		cout << floor((double)sum / (size - non * 2) + 0.5);
	}
}