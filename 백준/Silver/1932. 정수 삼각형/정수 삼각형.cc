#include <iostream>
#include <array>

using namespace std;

array<int, 502> Arr1;
array<int, 502> Arr2;
int N;

int WhatIsMax(int Size, int IsArr1) {
	int Max = 0;
	if (IsArr1) {
		for (int i = 0; i < Size; i++)
			if (Arr1[i] > Max)
				Max = Arr1[i];
	}
	else {
		for (int i = 0; i < Size; i++)
			if (Arr2[i] > Max)
				Max = Arr2[i];
	}

	return Max;
}

void ScanToArr(int Size, int IsArr1) {
	if (IsArr1)
		for (int i = 0; i < Size; i++) 
			cin >> Arr1[i];
	else
		for (int i = 0; i < Size; i++)
			cin >> Arr2[i];
}

void Sum(int Size, bool Istrue) {
	array<int, 502>* ChangeArr;
	array<int, 502>* PrevArr;

	if (Istrue) {
		ChangeArr = &Arr1;
		PrevArr = &Arr2;
	}
	else {
		ChangeArr = &Arr2;
		PrevArr = &Arr1;
	}

	for (int i = 0; i < Size; i++) {
		if (i == 0)
			ChangeArr->at(i) += PrevArr->at(i);
		else if (i == Size - 1)
			ChangeArr->at(i) += PrevArr->at(i - 1);
		else {
			if (PrevArr->at(i - 1) >= PrevArr->at(i))
				ChangeArr->at(i) += PrevArr->at(i - 1);
			else
				ChangeArr->at(i) += PrevArr->at(i);
		}
	}
}

int main() {
	cin >> N;
	bool Version = true;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 1)
			Version = true;
		else 
			Version = false;

		ScanToArr(i, Version);
		Sum(i, Version);
	}

	cout << WhatIsMax(N, Version);

	

	return 0;
}