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
	Fixed(3);

	while (true) {
		string line; in line;
		if (line == "END") break;

		Fori(line.size()) if (line[i] == ',' || line[i] == '.') line[i] = ' ';
		stringstream st;
		st.str(line);
		string temp;
		double x(0), y(0);
		while (st >> temp) {
			string step_str = "", dir = "";
			Fori(temp.size()) {
				if ('0' <= temp[i] && temp[i] <= '9') step_str += temp[i];
				else if (isupper(temp[i])) dir += temp[i];
			}

			double step = stoi(step_str);
			if (dir == "E") x += step;
			else if (dir == "W") x -= step;
			else if (dir == "N") y += step;
			else if (dir == "S") y -= step;
			else {
				double move = sqrt(step * step / 2.0);
				if (dir == "NE") x += move, y += move;
				else if (dir == "SE") x += move, y -= move;
				else if (dir == "SW") x -= move, y -= move;
				else if (dir == "NW") x -= move, y += move;
			}
		}

		out "You can go to (" << x << "," << y << "), the distance is " <<
			sqrt(x * x + y * y) << " steps." endl;
	}
}