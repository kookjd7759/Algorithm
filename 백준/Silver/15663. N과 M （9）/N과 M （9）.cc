#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

int comp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int list[8], visited[8];
vector<int> vec;
set<string> result_set;

void func(int size) {
	if (size == 1) {
		for (int i = 0; i < 8; i++) {
			if (!visited[i]) {
				string st = "";
				for (const auto iter : vec) {
					st += to_string(iter);
					st += " ";
				}
				st += to_string(list[i]);
				if (result_set.count(st) == 0) {
					cout << st << "\n";
					result_set.insert(st);
				}

			}
		}
	}
	else {
		for (int i = 0; i < 8; i++) {
			if (!visited[i]) {
				visited[i] = true;
				vec.push_back(list[i]);
				func(size - 1);
				vec.pop_back();
				visited[i] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	for (int i = n; i < 8; i++) visited[i] = true;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
		visited[i] = false;
	}
	qsort(list, n, sizeof(*list), comp);
	func(m);
}