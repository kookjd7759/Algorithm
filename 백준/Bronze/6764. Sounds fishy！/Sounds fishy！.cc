#include <iostream>

using namespace std;

int main() {
	int num[4]; for (int i = 0; i < 4; i++) cin >> num[i];
	int def[3]; for (int i = 1; i < 4; i++) def[i - 1] = num[i] - num[i - 1];
	
	if (def[0] == 0 && def[1] == 0 && def[2] == 0) cout << "Fish At Constant Depth";
	else if (def[0] > 0 && def[1] > 0 && def[2] > 0) cout << "Fish Rising";
	else if (def[0] < 0 && def[1] < 0 && def[2] < 0) cout << "Fish Diving";
	else cout << "No Fish";
}
