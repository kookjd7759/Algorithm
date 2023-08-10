#include <iostream>

using namespace std;

int main() {
	int NowH, NowM; cin >> NowH >> NowM;
	int Time_M; cin >> Time_M;

	NowM += Time_M;
	int temp_H = NowM / 60;
	NowM %= 60;
	NowH += temp_H;

	if (NowH >= 24)
		NowH -= 24;

	cout << NowH << " " << NowM;
}