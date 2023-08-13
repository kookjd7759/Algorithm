#include <iostream>
#include <algorithm>
#include <string>
#include <array>

#define ArrSize 21

using namespace std;

int M, EmptyIndex = 0;
array<int, ArrSize> Arr;

int Find(int Num) {
	for (int i = 0; i < EmptyIndex; i++)
		if (Arr[i] == Num)
			return i;
	return -1;
}

void Function() {
	string st; cin >> st;

	if (st == "add") {
		int x; cin >> x;
		int index = Find(x);

		if (index == -1)
			Arr[EmptyIndex++] = x;
	}
	else if (st == "remove") {
		int x; cin >> x;
		int index = Find(x);

		if (index != -1)
			Arr[index] = 0;
	}
	else if (st == "check") {
		int x; cin >> x;
		if (Find(x) == -1)
			cout << "0 \n";
		else
			cout << "1 \n";
	}
	else if (st == "toggle") {
		int x; cin >> x;
		int index = Find(x);

		if (index != -1)
			Arr[index] = 0;
		else {
			Arr[EmptyIndex++] = x;
		}
	}
	else if (st == "all") {
		for (int i = 0; i < ArrSize; i++)
			Arr[i] = (i + 1);
		EmptyIndex = 20;
	}
	else if (st == "empty") {
		for (int i = 0; i < ArrSize; i++)
			Arr[i] = 0;
		EmptyIndex = 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> M;
	for (int i = 0; i < M; i++)
		Function();

	return 0;
}