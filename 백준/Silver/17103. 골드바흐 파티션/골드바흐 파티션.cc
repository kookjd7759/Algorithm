#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 1000000
int primeList[SIZE + 1];

void makePrimeList() {
    for (int i = 2; i <= SIZE; i++) 
        primeList[i] = i;

    for (int i = 2; i <= sqrt(SIZE); i++) {
        if (primeList[i] == 0)
            continue;
        for (int j = i * i; j <= SIZE; j += i)
            primeList[j] = 0;
    }
}

int main() {
	makePrimeList();

	int T; cin >> T;
	while (T--) {
		int count = 0;
		int num; cin >> num;
		for (int i = 2; i < num; i++) {
			if (primeList[i] + primeList[num - i] == num) {
				count++;
				if (num - i == i)
					count++;
			}
		}
		cout << count / 2 << "\n";
	}
}