#include <iostream>

using namespace std;

bool Check(int num)
{
	if (num < 100) // 한자리 수, 두자리 수
		return true;

	int Array[4] = {1, -1, -1, -1};
	int i = 0;
	int M, num_ = num;

	while (num_ > 0) {
		Array[i++] = num_ % 10;
		num_ /= 10;
	}
	
	if (num < 1000) { // 세자리 수
		M = Array[0] - Array[1];
		if (M == Array[1] - Array[2])
			return true;
		else
			return false;
	}
	else // 1000
		return false;
}

int main(void)
{
	int N;
	cin >> N;
	bool check;

	int result = 0;

	for (int i = 1; i <= N; i++) {
		check = Check(i);
		if (check == true)
			result += 1;
	}

	cout << result;
}