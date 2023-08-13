#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> Map;

void InputInMap() {
	int size; cin >> size;
	
	while (size--) {
		string Key, equal, Value; cin >> Key >> equal >> Value;
		Map.insert({ Key, Value });
	}
}

void InputCommand() {
	int TestCase; cin >> TestCase;
	while (TestCase--) {
		int size; cin >> size;
		while (size--) {
			string st; cin >> st;
			cout << Map[st] << " ";
		}
		cout << "\n";
	}
}

int main() {
	InputInMap();
	InputCommand();
}