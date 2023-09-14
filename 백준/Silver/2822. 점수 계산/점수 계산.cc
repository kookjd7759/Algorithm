#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<pair<int, int>> vec(8);
	for (int i = 0; i < 8; i++){
		cin >> vec[i].first;
		vec[i].second = i + 1;
	}
	
	sort(vec.begin(), vec.end());
	int sum(0);
	vector<int> vec_index(5);
	for (int i = 3; i < 8; i++){
		sum += vec[i].first;
		vec_index[i - 3] = vec[i].second;
	}
	cout << sum << "\n";

	sort(vec_index.begin(), vec_index.end());
	for (int i = 0; i < 5; i++)
		cout << vec_index[i] << " ";
}