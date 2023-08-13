#include <iostream>
#include <cmath>

using namespace std;

struct Circle {
	float x;
	float y;
	float r;
};

int Func(Circle A, Circle B) {
	double d = sqrt(pow(abs(A.x - B.x), 2) + pow(abs(A.y - B.y), 2));
	// cout << "A.r : " << A.r << "\n"; cout << "B.r : " << B.r << "\n"; cout << "d : " << d << "\n";
	if (d == 0) {
		if (A.r == B.r)
			return -1;
		else
			return 0;
	}
	else {
		if (A.r + B.r < d)
			return 0;
		else if (A.r + B.r == d || abs(A.r - B.r) == d)
			return 1;
		else if (A.r + B.r > d && abs(A.r - B.r) < d)
			return 2;
		else
			return 0;
	}
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int Testcase; cin >> Testcase;
	for (int i = 0; i < Testcase; i++) {
		Circle circle_1; cin >> circle_1.x >> circle_1.y >> circle_1.r;
		Circle circle_2; cin >> circle_2.x >> circle_2.y >> circle_2.r;

		cout << Func(circle_1, circle_2) << "\n";
	}

	return 0;
}