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

void ShowBoard() {
	cout << "\n";
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << Arr_Input[i][j] << " ";
		}
		cout << "\n";
	}
}

void ShowCube() {
	cout << "  " << cube[0].Num << "\n";
	for (int i = 1; i < 5; i++) {
		cout << cube[i].Num << " ";
	}
	cout << "\n  " << cube[5].Num << "\n";
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
	// ShowBoard();
	// ShowCube();
	Arr_Input[y][x] = 0;
	
	// cout << "Prevnum : " << Prevnum << "\n";
	// cout << "Nownum : " << Nownum << "\n";
	// cout << "Start GetInToCube \n";

	if (Prevnum == 0 && Nownum == 1 && Direction == NULL) { // 처음 1을 Top에 넣는 과정
		// cout << "First Call GetInToCube() \n";
		cube[Side2].Num = Nownum; // 1
		{
			cube[Side2].Direction[Up] = Top;
			cube[Side2].Direction[Down] = Bottom;
			cube[Side2].Direction[Left] = Side1;
			cube[Side2].Direction[Right] = Side3;
		}
	}
	else { // 처음이 아닌 경우
		int previndex = -1;
		// cout << "==== Arr_Ptr4_Num[i].second ==== \n";
		for (int i = 0; i < 6; i++) {
			// cout << cube[i].Num << " ";
			if (cube[i].Num == Prevnum) {
				previndex = i;
				// break;
			}
		}
		// cout << "\nindex : " << index << "\n\n";

		if (previndex == -1) { // 위에서 index를 찾지 못한 경우
			cout << "error occured :: GetInToCube() there is Index -1 \n";
			exit(0);
		}
		else {
			// cout << "cube[cube[index].Direction[Direction]].Num : " << cube[cube[index].Direction[Direction]].Num << "\n";
			int nowindex = cube[previndex].Direction[Direction];
			if (cube[nowindex].Num) { // Direction이 가리키는 방향에 값이 이미 있는 경우
				cout << "0";
				exit(0);
			}
			else { // 값을 넣는 과정
				cube[nowindex].Num = Nownum;
				{ // 값을 넣은 cube의 Direction을 초기화 해주는 과정
					cube[nowindex].Direction[ConvertToNextDirection(Direction - 2)] = previndex; // 붙어있는 곳
					cube[nowindex].Direction[ConvertToNextDirection(Direction + 1)] = cube[previndex].Direction[ConvertToNextDirection(Direction + 1)]; // 붙은 기준 위
					cube[nowindex].Direction[ConvertToNextDirection(Direction - 1)] = cube[previndex].Direction[ConvertToNextDirection(Direction - 1)];// 붙은 기준 아래
					
					int LastDirection = -100;
					array<int, 6> TempCube{};
					TempCube[previndex] = true;
					// cout << "TempCube[index] : " << TempCube[previndex] << "\n";
					for (int i = 0; i < 4; i++) {
						// cout << "cube[previndex].Direction[i] : " << cube[previndex].Direction[i] << "\n";
						TempCube[cube[previndex].Direction[i]] = true;
					}

					for (int i = 0; i < 6; i++)
						if (TempCube[i] == false)
							LastDirection = i;
					
					if (LastDirection == -100) {
						cout << "error ocuured :: GetInToCube() LastDirection is -100 \n";
						exit(0);
					}
					else {
						cube[nowindex].Direction[Direction] = LastDirection; // 안 붙은 곳
					}
				}
			}
		}
	}
}

void Func(int x, int y, int Prevnum, int Nownum, int Direction = NULL) {
	static bool IsFirst = true;
	GetInToCube(x, y, Prevnum, Nownum, Direction);

	if (Arr_Input[y - 1][x]) { // Up
		// cout << "Up \n";
		Func(x, y - 1, Nownum, Arr_Input[y - 1][x], Up);
	}

	if (Arr_Input[y][x - 1]) { // Left
		// cout << "Left \n";
		Func(x - 1, y, Nownum, Arr_Input[y][x - 1], Left);
	}

	if (Arr_Input[y + 1][x]) { // Down
		// cout << "Down \n";
		Func(x, y + 1, Nownum, Arr_Input[y + 1][x], Down);
	}

	if (Arr_Input[y][x + 1]) { // Right
		// cout << "Right \n";
		Func(x + 1, y, Nownum, Arr_Input[y][x + 1], Right);
	}

	return;
}

int main() {
	pair<int, int> Pos_1_xy;
	Input(Pos_1_xy);
	// ShowBoard();

	// cout << "Pos_1_xy.first : " << Pos_1_xy.first << ", Pos_1_xy.second : " << Pos_1_xy.second << "\n\n";

	Func(Pos_1_xy.first, Pos_1_xy.second, 0, 1);
	// ShowBoard();
	// ShowCube();

	cout << cube[Side4].Num;

	return 0;
}

/*
	 0
	1234
	 5

		  Top
	Side1 Side2 Side3 Side4
		  Bottom

*/