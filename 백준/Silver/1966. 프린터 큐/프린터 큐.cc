#include <iostream>
#include <queue>
#include <array>

using namespace std;

bool IsPrint(const int num, const array<int, 10> Max_Check) {
	for (int i = num + 1; i < 10; i++)
		if (Max_Check.at(i) > 0)
			return false;
	return true;
}

int main() {
	int Testcase; cin >> Testcase;

	while (Testcase--) {
		int N, M; cin >> N >> M;
		queue<pair<int, int>> que_Num_Index;
		array<int, 10> Max_Check{};
		
		for (int i = 0; i < N; i++) {
			pair<int, int> pair_; pair_.second = i;
			cin >> pair_.first;
			que_Num_Index.push(pair_);

			Max_Check.at(pair_.first) += 1;
		}

		int count_ = 0;
		while (true) {
			if (IsPrint(que_Num_Index.front().first, Max_Check)) {
				count_++;

				if (que_Num_Index.front().second == M)
					break;

				Max_Check.at(que_Num_Index.front().first)--;
				que_Num_Index.pop();
			}
			else {
				que_Num_Index.push(que_Num_Index.front());
				que_Num_Index.pop();
			}
		}

		cout << count_ << "\n";
	}

	return 0;
}