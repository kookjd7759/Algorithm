#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int comp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int list[8];
int n, m;
vector<int> vec;

void func(int size, int index) {
	if (size == 1) {
		for (int i = index; i < n; i++) {
			for (const auto iter : vec)
				cout << iter << " ";
			cout << list[i];
			cout << "\n";
		}
	}
	else {
		for (int i = index; i < n; i++) {
			vec.push_back(list[i]);
			func(size - 1, i);
			vec.pop_back();
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		cin >> list[i];
	qsort(list, n, sizeof(*list), comp);
	func(m, 0);
}