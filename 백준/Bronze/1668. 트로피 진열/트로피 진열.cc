#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)

using namespace std;

int main() {
	Sync;

	int n, prev, cnt; in n;
	vector<int> vec(n);
	Fori(n) in vec[i];

	prev = 0; cnt = 0;
	Fori(n) if (prev < vec[i]) {
		cnt++;
		prev = vec[i];
	}
	out cnt endl;

	prev = 0; cnt = 0;
	for (int i = vec.size() - 1; i >= 0; i--)
		if (prev < vec[i]) {
			cnt++;
			prev = vec[i];
		}
	out cnt;
}