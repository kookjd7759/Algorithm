#include <iostream>

using namespace std;

int main(void)
{
	int n, max = 0;
	float sum = 0.0f;
	cin >> n;

	float* num = new float[n];

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
		if (max <= num[i])
			max = num[i];

	for (int i = 0; i < n; i++) {
		num[i] = (num[i] / max) * 100;

		sum += num[i];
	}

	cout << (sum / n);
}