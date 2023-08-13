#include <iostream>
#include <array>
#include <vector>

using namespace std;

enum {
	Top,
	Side1,
	Side2,
	Side3,
	Side4,
	Bottom
};

enum {
	Up,
	Left,
	Down,
	Right
};

struct Side {
	int Num = 0;
	int Direction[4]{};
};

array<array<int, 6>, 6> Arr_Input;
array<Side, 6> cube;

int ConvertToNextDirection(int Direction) {
	if (Direction > 3)
		Direction -= 4;
	else if (Direction < 0)
		Direction += 4;
	
	return Direction;
}

void Input(pair<int, int>& Pos_1_xy) {
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++) {
			int num; cin >> num;
			if (num == 1)
				Pos_1_xy = { j, i };
			Arr_Input[i][j] = num;
		}
}

void GetInToCube(int x, int y, int Prevnum, int Nownum, const int& Direction) {
	Arr_Input[y][x] = 0;

	if (Prevnum == 0 && Nownum == 1 && Direction == NULL) {
		cube[Side2].Num = Nownum;
		cube[Side2].Direction[Up] = Top;
		cube[Side2].Direction[Down] = Bottom;
		cube[Side2].Direction[Left] = Side1;
		cube[Side2].Direction[Right] = Side3;
	}
	else {
		int previndex = -1;
		for (int i = 0; i < 6; i++) 
			if (cube[i].Num == Prevnum) 
				previndex = i;

		int nowindex = cube[previndex].Direction[Direction];
		if (cube[nowindex].Num) {
			cout << "0";
			exit(0);
		}
		else {
			cube[nowindex].Num = Nownum;
			cube[nowindex].Direction[ConvertToNextDirection(Direction - 2)] = previndex;
			cube[nowindex].Direction[ConvertToNextDirection(Direction + 1)] = cube[previndex].Direction[ConvertToNextDirection(Direction + 1)];
			cube[nowindex].Direction[ConvertToNextDirection(Direction - 1)] = cube[previndex].Direction[ConvertToNextDirection(Direction - 1)];

			int LastDirection = -100;
			array<int, 6> TempCube{};
			TempCube[previndex] = true;
			for (int i = 0; i < 4; i++)
				TempCube[cube[previndex].Direction[i]] = true;

			for (int i = 0; i < 6; i++)
				if (TempCube[i] == false)
					LastDirection = i;

			cube[nowindex].Direction[Direction] = LastDirection;
		}
	}
}

void Func(int x, int y, int Prevnum, int Nownum, int Direction = NULL) {
	static bool IsFirst = true;
	GetInToCube(x, y, Prevnum, Nownum, Direction);

	if (Arr_Input[y - 1][x]) 
		Func(x, y - 1, Nownum, Arr_Input[y - 1][x], Up);

	if (Arr_Input[y][x - 1]) 
		Func(x - 1, y, Nownum, Arr_Input[y][x - 1], Left);

	if (Arr_Input[y + 1][x])
		Func(x, y + 1, Nownum, Arr_Input[y + 1][x], Down);

	if (Arr_Input[y][x + 1])
		Func(x + 1, y, Nownum, Arr_Input[y][x + 1], Right);

	return;
}

int main() {
	pair<int, int> Pos_1_xy;
	Input(Pos_1_xy);
	Func(Pos_1_xy.first, Pos_1_xy.second, 0, 1);
	cout << cube[Side4].Num;

	return 0;
}