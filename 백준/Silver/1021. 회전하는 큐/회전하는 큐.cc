#include <iostream>
#include <deque>
#include <vector>

using namespace std;

deque<int> de{};
vector<int> vec;
int N, M, COUNT = 0;

void Input() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		de.push_back(i);
}

int CheckInVector(int num, bool IsFront) {
	int Count = 0;
	deque<int> TempDe = de;
	int size = TempDe.size();

	if (IsFront) {
		for (int i = 0; i < size; i++) {
			if (TempDe.front() == num)
				return Count;
			else {
				Count++;
				TempDe.pop_front();
			}
		}
	}
	else {
		for (int i = 0; i < size; i++) {
			if (TempDe.back() == num)
				return Count;
			else {
				Count++;
				TempDe.pop_back();
			}
		}
	}
	
	return Count;
}

void Del(int num, bool IsBack) {
	vec.push_back(num);

	if (IsBack) {
		while (true) {
			if (de.front() == num) {
				de.pop_front();
				break;
			}

			de.push_front(de.back());
			de.pop_back();

			COUNT++;
		}
	}
	else {
		while (true) {
			if (de.front() == num) {
				de.pop_front();
				break;
			}

			de.push_back(de.front());
			de.pop_front();

			COUNT++;
		}
	}
}

void Func() {
	for (int i = 0; i < M; i++) {
		int num; cin >> num;
		int FrontWay = CheckInVector(num, true);
		int BackWay = CheckInVector(num, false);
		
		if (FrontWay <= BackWay) 
			Del(num, 0);
		else 
			Del(num, 1);
	}
}

int main() {
	Input();
	Func();

	cout << COUNT;

	return 0;
}