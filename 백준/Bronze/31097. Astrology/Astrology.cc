#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;

	string date; in date;
	int month = stoi(date.substr(5, 2));
	int day = stoi(date.substr(8, 2));
	if (month == 1) {
		if (day <= 19) out "Capricorn";
		else out "Aquarius";
	}
	else if (month == 2) {
		if (day <= 18) out "Aquarius";
		else out "Pisces";
	}
	else if (month == 3) {
		if (day <= 20) out "Pisces";
		else out "Aries";
	}
	else if (month == 4) {
		if (day <= 19) out "Aries";
		else out "Taurus";
	}
	else if (month == 5) {
		if (day <= 20) out "Taurus";
		else out "Gemini";
	}
	else if (month == 6) {
		if (day <= 20) out "Gemini";
		else out "Cancer";
	}
	else if (month == 7) {
		if (day <= 22) out "Cancer";
		else out "Leo";
	}
	else if (month == 8) {
		if (day <= 22) out "Leo";
		else out "Virgo";
	}
	else if (month == 9) {
		if (day <= 22) out "Virgo";
		else out "Libra";
	}
	else if (month == 10) {
		if (day <= 22) out "Libra";
		else out "Scorpio";
	}
	else if (month == 11) {
		if (day <= 22) out "Scorpio";
		else out "Sagittarius";
	}
	else if (month == 12) {
		if (day <= 21) out "Sagittarius";
		else out "Capricorn";
	}
}