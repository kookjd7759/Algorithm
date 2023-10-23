#include <iostream>
#include <vector>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

vector<int> vec;

int main() {
	sync;

	int n, k; cin >> n >> k;
	int fk = k % 10, f2k = (2 * k) % 10;
	for (int i = 1; i <= n; i++) {
		int num = i % 10;
		if (num != fk && num != f2k) 
			vec.push_back(i);
	}
	cout << vec.size() << "\n";
	for (const int iter : vec)
		cout << iter << " ";
}