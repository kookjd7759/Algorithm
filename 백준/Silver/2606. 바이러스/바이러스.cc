#include <iostream>
#include <vector>

using namespace std;

struct ComputerInfo {
	vector<int> Network;
	bool Virus = false;
};

ComputerInfo* Computer;
int ComputerSize;
int NetworkSize;
int Count = -1;

void Input() {
	cin >> ComputerSize;
	cin >> NetworkSize;

	Computer = new ComputerInfo[ComputerSize + 1];

	for (int i = 0; i < NetworkSize; i++) {
		int MainComputerNumber; cin >> MainComputerNumber;
		int TargetComputerNumber; cin >> TargetComputerNumber;
		Computer[MainComputerNumber].Network.push_back(TargetComputerNumber);
		Computer[TargetComputerNumber].Network.push_back(MainComputerNumber);
	}
}

void Function(int ComputerNumber) {
	Computer[ComputerNumber].Virus = true;
	Count++;

	for (const auto& iter : Computer[ComputerNumber].Network)
		if (Computer[iter].Virus == false)
			Function(iter);
}

void PrintVector() {
	for (int i = 1; i <= ComputerSize; i++) {
		cout << i << " : ";

		for (const auto& iter : Computer[i].Network)
			cout << iter << " ";

		cout << "\n";
	}
}

int main() {
	Input();
	// PrintVector();
	Function(1);

	cout << Count;
}