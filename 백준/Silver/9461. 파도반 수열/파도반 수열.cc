#include <iostream> 
#include <array> 

using namespace std;

array<long long int, 101> Arr{};

int main() {
	Arr[0] = 1; Arr[1] = 1; Arr[2] = 1; Arr[3] = 2; Arr[4] = 2;
	Arr[5] = 3; Arr[6] = 4; Arr[7] = 5; Arr[8] = 7; Arr[9] = 9;

	int TestCase; cin >> TestCase;
	while (TestCase--) {
		int N; cin >> N;

		if (--N < 10)
			cout << Arr[N] << "\n";
		else {
			for (int i = 10; i <= N; i++) {
				Arr[i] = Arr[i - 1] + Arr[i - 5];

				if (i == N) {
					cout << Arr[i] << "\n";
					break;
				}
			}
		}
	}

	return 0;
}