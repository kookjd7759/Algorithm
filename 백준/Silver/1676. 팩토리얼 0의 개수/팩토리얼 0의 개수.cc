#include <iostream>

using namespace std;

int Count = 0;

void CountZero(int NUM) {
	for (int i = NUM; i > 0; i--) {
		if (i % 5 == 0) {
			int num = i;

			while (num % 5 == 0) {
				num /= 5;
				Count++;
			}
		}
	}
}

int main() {
	int N; cin >> N;
	CountZero(N);
	cout << Count;
}