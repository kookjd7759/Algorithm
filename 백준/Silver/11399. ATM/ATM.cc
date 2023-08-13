#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;

void InputInVec(int Size) {
	for (int i = 0; i < Size; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
}

int SumFunc() {
	int result = 0, temp = 0;
	for (const auto& iter : vec) {
		temp += iter;
		result += temp;
	}
	return result;
}

int main() {
	int Size; cin >> Size;
	InputInVec(Size);
	sort(vec.begin(), vec.end());
	cout << SumFunc();

	return 0;
}