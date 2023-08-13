#include <iostream>
#define endl "\n"

using namespace std;

struct Object {
	int Value;
	int Kg;
};

int N, K;
struct Object* object;
int DP[105][100'005]{};

void Input() {
	cin >> N >> K;
	object = new struct Object[N + 2];

	for (int i = 1; i <= N; i++) 
		cin >> object[i].Kg >> object[i].Value;
}

void Function() {
	for (int i = 1; i <= N; i++)
		for (int j = 0; j <= K; j++) {
			if (object[i].Kg > j)
				DP[i][j] = DP[i - 1][j];
			else
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - object[i].Kg] + object[i].Value);
		}
}

int main() {
	Input();
	Function();
	cout << DP[N][K];
}