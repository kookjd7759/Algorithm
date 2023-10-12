#include <iostream>
#include <string>

using namespace std;

int main() {
	double kg, m; cin >> kg >> m;
	double BMI = kg / (m * m);
	if (BMI > 25) cout << "Overweight";
	else if (BMI >= 18.5) cout << "Normal weight";
	else cout << "Underweight";
}