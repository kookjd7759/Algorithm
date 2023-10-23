#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Node {
	int a;
	string st;
};

bool comp(const Node& a, const Node& b) {
	return a.a > b.a;
}

vector<Node> vec_1(3);
vector<int> vec_2(3);

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 0; i < 3; i++) {
		int a, b; string st; cin >> a >> b >> st;
		Node node{a, st};
		vec_1[i] = node;
		vec_2[i] = b % 100;
	}
	sort(vec_1.begin(), vec_1.end(), comp);
	sort(vec_2.begin(), vec_2.end());

	for (const auto iter : vec_2) cout << iter;
	cout << "\n";
	for (const auto iter : vec_1) cout << iter.st[0];
}