#include <iostream>
#include <array>

using namespace std;

array<int, 3> Arr1;
array<int, 3> Arr2;

void Prev_Is_Arr1(bool IsTrue) {
	array<int, 3>* PrevArr;
	array<int, 3>* NowArr;

	if (IsTrue) {
		PrevArr = &Arr1;
		NowArr = &Arr2;
	}
	else {
		PrevArr = &Arr2;
		NowArr = &Arr1;
	}
	
	if (PrevArr->at(1) > PrevArr->at(2))
		NowArr->at(0) += PrevArr->at(2);
	else
		NowArr->at(0) += PrevArr->at(1);

	if (PrevArr->at(0) > PrevArr->at(2))
		NowArr->at(1) += PrevArr->at(2);
	else
		NowArr->at(1) += PrevArr->at(0);

	if (PrevArr->at(0) > PrevArr->at(1))
		NowArr->at(2) += PrevArr->at(1);
	else
		NowArr->at(2) += PrevArr->at(0);
}

int PrintMin(array<int, 3> Arr) {
	int min = Arr[0];

	if (Arr[1] < Arr[2]) {
		if (min > Arr[1])
			min = Arr[1];
	}
	else
		if (min > Arr[2])
			min = Arr[2];

	return min;
}

int main() {
	int N; cin >> N;
	cin >> Arr1[0] >> Arr1[1] >> Arr1[2];

	bool What = true;
	for (int i = 1; i < N; i++) {
		if (i % 2 == 1) {
			cin >> Arr2[0] >> Arr2[1] >> Arr2[2];
			Prev_Is_Arr1(true);
			What = true;
		}
		else {
			cin >> Arr1[0] >> Arr1[1] >> Arr1[2];
			Prev_Is_Arr1(false);
			What = false;
		}
	}

	if (What) 
		cout << PrintMin(Arr2);
	else 
		cout << PrintMin(Arr1);

	return 0;
}