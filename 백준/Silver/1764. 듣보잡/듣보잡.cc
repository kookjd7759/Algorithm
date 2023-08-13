#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int N, M;
vector<string> vec;
vector<string> Result_vec;

void Input() {
	cin >> N >> M;
	while (N--) {
		string st; cin >> st;
		vec.push_back(st);
	}

	sort(vec.begin(), vec.end());
}

void Select() {
	while (M--) {
		string st; cin >> st;
		if (binary_search(vec.begin(), vec.end(), st))
			Result_vec.push_back(st);
	}

}

int main() {
	Input();
	Select();
	sort(Result_vec.begin(), Result_vec.end());
	cout << Result_vec.size() << "\n";
	for (const auto& iter : Result_vec)
		cout << iter << "\n";
}