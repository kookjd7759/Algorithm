#include <iostream>

using namespace std;

int main() {
	int Pp, Pe, Ee, Ep; cin >> Pp >> Pe >> Ee >> Ep;
	int sp = Pp + Ep, se = Pe + Ee;
	
	if (sp != se) sp < se ? cout << "Esteghlal" : cout << "Persepolis";
	else if (Pe != Ep) Ep < Pe ? cout << "Esteghlal" : cout << "Persepolis";
	else cout << "Penalty";
}