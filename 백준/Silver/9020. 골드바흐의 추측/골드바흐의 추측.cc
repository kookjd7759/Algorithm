#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 10050

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	bool Arr[MAX + 1]{}; Arr[0] = true; Arr[1] = true;
	for (int i = 2; i * i <= MAX; i++) {
		if (!Arr[i]) {
			for (int j = i * 2; j <= MAX; j += i) {
				if (Arr[j] == false)
					Arr[j] = true;
			}
		}
	}

	vector<int> DecimalVec;

	for (int i = 0; i <= MAX; i++)
		if (!Arr[i])
			DecimalVec.push_back(i);

	int TestCase; cin >> TestCase;

	for (int i = 0; i < TestCase; i++) {
		int N; cin >> N;
		int index = 0;
		int num = N / 2;

		for (int i = 0; i < DecimalVec.size(); i++) {
			if (num < DecimalVec.at(i)) {
				index = i - 1;
				break;
			}
		}
		
		vector<int>::iterator it;
		
		for (int i = index; i >= 0; i--) {
			it = find(DecimalVec.begin(), DecimalVec.end(), N - DecimalVec.at(i));

			if (it != DecimalVec.end()) {
				cout << DecimalVec.at(i) << " " << N - DecimalVec.at(i) << "\n";
				break;
			}
		}
	}

	return 0;
}