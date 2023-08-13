#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int TestCase; cin >> TestCase;
	while (TestCase--) {
		int result = 0;
		pair<int, int> Start_Pos_xy; cin >> Start_Pos_xy.first >> Start_Pos_xy.second;
		pair<int, int> End_Pos_xy; cin >> End_Pos_xy.first >> End_Pos_xy.second;

		int Number; cin >> Number;
		while (Number--) {
			int x, y, r; cin >> x >> y >> r;

			double StartDistance;
			StartDistance = sqrt(pow(abs(Start_Pos_xy.first - x), 2) + pow(abs(Start_Pos_xy.second - y), 2));
			double EndDistance;
			EndDistance = sqrt(pow(abs(End_Pos_xy.first - x), 2) + pow(abs(End_Pos_xy.second - y), 2));

			if ((StartDistance < r && EndDistance > r) || (StartDistance > r && EndDistance < r))
				result++;
		}

		cout << result << "\n";
	}
}