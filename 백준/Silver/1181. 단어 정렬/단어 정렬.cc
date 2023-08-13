#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Comp(const string x, const string y) {
	if (x.length() != y.length())
		return x.length() < y.length();
	else
		return x < y;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<string> vec;

	for (int i = 0; i < N; i++) {
		string ans; cin >> ans;
		vec.push_back(ans);
	}

	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < vec.size(); i++) 
		if (i == 0)
			cout << vec.at(i) << "\n";
		else if (vec.at(i - 1) != vec.at(i) )
			cout << vec.at(i) << "\n";
			

    return 0;
}