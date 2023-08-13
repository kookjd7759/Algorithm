#include <iostream>
#include <array>

using namespace std;

array<int, 100001> Arr_Distance;
array<int, 100002> Arr_Price;

void Input(int Size) {
	for (int i = 0; i < Size - 1; i++) 
		cin >> Arr_Distance[i];

	for (int i = 0; i < Size; i++)
		cin >> Arr_Price[i];
}

int Func(int Size) {
	int result = 0;
	int num = Arr_Price[0];
	for (int i = 0; i < Size - 1; i++) {
		result += num * Arr_Distance[i];
		if (Arr_Price[i] > Arr_Price[i + 1])
			num = Arr_Price[i + 1];
	}

	return result;
}

int main() {
	int Size; cin >> Size;
	Input(Size);
	cout << Func(Size);

	return 0;
} 