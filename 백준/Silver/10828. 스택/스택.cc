#include <iostream>
#include <string>

using namespace std;

int Arr[10001]{};
int ArrSize = 0;

int Pop() {
	if (ArrSize == 0)
		return -1;
	else {
		int temp = Arr[ArrSize];
		Arr[ArrSize] = 0;
		ArrSize--;
		return temp;
	}
}

int Size() {
	return ArrSize;
}

int Empty() {
	if (ArrSize == 0)
		return 1;
	else
		return 0;
}

int Top() {
	if (ArrSize == 0)
		return -1;
	else 
		return Arr[ArrSize];
}

void Push(int num) {
	ArrSize++;
	Arr[ArrSize] = num;
}

void s_Func(string st) {
	if (st == "pop")
		cout << Pop() << "\n";
	else if (st == "size")
		cout << Size() << "\n";
	else if (st == "empty")
		cout << Empty() << "\n";
	else if (st == "top")
		cout << Top() << "\n";
	else { // push X
		int num; cin >> num;
		Push(num);
	}
}

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string st; cin >> st;
		s_Func(st);
	}

	return 0;
}