#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int sum = 0;

	char num[101];
	cin >> num;

	for (int i = 0; i < N; i++)
		sum += ((int)num[i] - 48);

	cout << sum;
}