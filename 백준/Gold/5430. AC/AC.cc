#include <iostream>
#include <deque>
#include <string>

using namespace std;

void ScanInDeque(deque<int>& de, const string& St_Array) {
	int num = 0;
	bool IsOneNum = false;
	for (int i = 0; i < St_Array.size(); i++) {
		if (St_Array[i] > 47 && St_Array[i] < 58) {
			num = num * 10 + St_Array[i] - 48;
			IsOneNum = true;
		}
		else {
			if (IsOneNum) {
				de.push_back(num);
				num = 0;
			}
		}
	}
}

bool DelFront_Back(deque<int>& de, bool Istrue) {
	if (de.empty())
		return false;

	if (Istrue) 
		de.pop_front();
	else 
		de.pop_back();

	return true;
}

string DequeToString(deque<int>& de, bool Istrue) {
	int size = de.size();
	string st = "[";
	if (Istrue) {
		for (int i = 0; i < size; i++) {
			if (i != size - 1)
				st += to_string(de.front()) + ",";
			else
				st += to_string(de.front());

			de.pop_front();
		}
		st += "]";
	}
	else {
		for (int i = 0; i < size; i++) {
			if (i != size - 1)
				st += to_string(de.back()) + ",";
			else
				st += to_string(de.back());

			de.pop_back();
		}
		st += "]";
	}

	return st;
}

string Func(const string& St_Order,const string& St_Array, int Size) {
	deque<int> de; 
	ScanInDeque(de, St_Array);
	bool IsFront = true;
	
	for (int i = 0; i < St_Order.size(); i++) {
		if (St_Order.at(i) == 'R') {
			if (IsFront)
				IsFront = false;
			else
				IsFront = true;
		}
		else
			if (!DelFront_Back(de, IsFront))
				return "error";
	}

	if (IsFront) 
		return DequeToString(de, true);
	else 
		return DequeToString(de, false);
}

int main() {
	int TestCase; cin >> TestCase;
	while (TestCase--) {
		string St_Order; cin >> St_Order;
		int Size; cin >> Size;
		string St_Array; cin >> St_Array;

		cout << Func(St_Order, St_Array, Size) << "\n";
	}
	
	return 0;
}