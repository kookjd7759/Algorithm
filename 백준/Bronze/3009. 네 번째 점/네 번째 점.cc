#include <iostream>

using namespace std;

int AloneNum (int num1, int num2, int num3){
	if (num1 == num2)
		return num3;
	else if (num1 == num3)
		return num2;
	else
		return num1;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	pair<int, int> p1; cin >> p1.first >> p1.second;
	pair<int, int> p2; cin >> p2.first >> p2.second;
	pair<int, int> p3; cin >> p3.first >> p3.second;

	cout << AloneNum(p1.first, p2.first, p3.first) << " " << AloneNum(p1.second, p2.second, p3.second);

	return 0;
}