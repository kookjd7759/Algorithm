#include <iostream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string name; cin >> name;
		int age, kg; cin >> age >> kg;

		if (name == "#" and age == 0 and kg == 0)
			break;

		if (age > 17 or kg >= 80)
			cout << name << " " << "Senior\n";
		else
			cout << name << " " << "Junior\n";
	}
}