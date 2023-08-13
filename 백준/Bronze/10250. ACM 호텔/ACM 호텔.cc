#include<iostream>

using namespace std;

int main() {
	int TestCase; cin >> TestCase;
	int H, W, N, H_, W_;

	for (int i = 0; i < TestCase; i++) {
		H; cin >> H;
		W; cin >> W;
		N; cin >> N;

		H_ = N % H;
		if (H_ == 0)
			H_ = H;

		W_ = N / H;
		if (N % H != 0)
			W_++;

		cout << H_;
		if (W_ < 10)
			cout << 0;
		cout << W_ << endl;
	}
}