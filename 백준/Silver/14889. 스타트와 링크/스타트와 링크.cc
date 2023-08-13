#include <iostream>
#include <array>
#include <vector>
#include <cmath>

using namespace std;

array<array<int, 21>, 21> Arr{};
array<bool, 21> Arr_Check{};
int N, Sum = 0, Def = 99999;

void Input() {
	cin >> N;
	for (int Y = 0; Y < N; Y++)
		for (int X = 0; X < N; X++)
			cin >> Arr[Y][X];
}

void Print_() {
	for (int Y = 0; Y < N; Y++) {
		for (int X = 0; X < N; X++) {
			cout << Arr[Y][X] << " ";
		}
		cout << "\n";
	}
}

bool Check(int num) {
	if (Arr_Check.at(num))
		return false;
	return true;
}

void Sum_Func(int& Team1, int& Team2) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			if (Arr_Check.at(i) && Arr_Check.at(j)) 
				Team1 += Arr[i][j];
			if (!Arr_Check.at(i) && !Arr_Check.at(j))
				Team2 += Arr[i][j];
		}
}

void Func(int index, int nextnum) {
	if (index == N / 2) {
		/*
		for (int i = 0; i < N; i++)
			cout << Arr_Check.at(i);
		cout << "\n";
		*/
		int Team1 = 0, Team2 = 0;
		Sum_Func(Team1, Team2);

		if (abs(Team1 - Team2) < Def)
			Def = abs(Team1 - Team2);

		return;
	}

	for (int i = nextnum; i < N; i++)
		if (Check(i)) {
			Arr_Check.at(i) = true;
			Func(index + 1, i + 1);
			Arr_Check.at(i) = false;
		}
}

int main() {
	Input();
	Func(0, 0);
	// Print_();

	cout << Def;

	return 0;
}