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

struct RGB {
	int r, g, b;
};

double getCal(RGB rgb, RGB rgb2) {
    return sqrt((rgb.r - rgb2.r) * (rgb.r - rgb2.r)
        +(rgb.g - rgb2.g) * (rgb.g - rgb2.g)
        +(rgb.b - rgb2.b) * (rgb.b - rgb2.b));
}

int main() {
	Sync;
	
	int T; in T;
	For1k(T) {
		int n; in n;
		vector<RGB> vec(n);
		Fori(n) in vec[i].r >> vec[i].g >> vec[i].b;

		double temp = 0.0;
		vector<pair<int, int>> result;
		Fori(n) {
			for (int j = i + 1; j < n; j++) {
				double cal = getCal(vec[i], vec[j]);
				if (temp < cal) {
					result.clear();
					result.push_back({ i + 1, j + 1 });
					temp = cal;
				}
				else if (temp == cal) result.push_back({ i + 1, j + 1 });
			}
		}

		sort(result.begin(), result.end(), [&](pair<int, int>& a, pair<int, int>& b) {
			if (a.first < b.first) return true;
			if (a.first == b.first)
				return a.second < b.second;
			return false;
			});
		out "Data Set " << k << ":\n";
		for (const pair<int, int> iter : result)
			out iter.first spc iter.second endl;
	}
}