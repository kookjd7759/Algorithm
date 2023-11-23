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
	map<string, char> m;
	m.insert({ ".-",	'A' });
	m.insert({ "-...",	'B' });
	m.insert({ "-.-.",	'C' });
	m.insert({ "-..",	'D' });
	m.insert({ ".",		'E' });
	m.insert({ "..-.",	'F' });
	m.insert({ "--.",	'G' });
	m.insert({ "....",	'H' });
	m.insert({ "..",	'I' });
	m.insert({ ".---",	'J' });
	m.insert({ "-.-",	'K' });
	m.insert({ ".-..",	'L' });
	m.insert({ "--",	'M' });
	m.insert({ "-.",	'N' });
	m.insert({ "---",	'O' });
	m.insert({ ".--.",	'P' });
	m.insert({ "--.-",	'Q' });
	m.insert({ ".-.",	'R' });
	m.insert({ "...",	'S' });
	m.insert({ "-",		'T' });
	m.insert({ "..-",	'U' });
	m.insert({ "...-",	'V' });
	m.insert({ ".--",	'W' });
	m.insert({ "-..-",	'X' });
	m.insert({ "-.--",	'Y' });
	m.insert({ "--..",	'Z' });
	m.insert({ ".----",	'1' });
	m.insert({ "..---",	'2' });
	m.insert({ "...--",	'3' });
	m.insert({ "....-",	'4' });
	m.insert({ ".....",	'5' });
	m.insert({ "-....",	'6' });
	m.insert({ "--...",	'7' });
	m.insert({ "---..",	'8' });
	m.insert({ "----.",	'9' });
	m.insert({ "-----",	'0' });
	m.insert({ "--..--",',' });
	m.insert({ ".-.-.-",'.' });
	m.insert({ "..--..",'?' });
	m.insert({ "---...",':' });
	m.insert({ "-....-",'-' });
	m.insert({ ".--.-.",'@' });
	int n; in n;
	while (n--) {
		string st; in st;
		out m[st];
	}
}