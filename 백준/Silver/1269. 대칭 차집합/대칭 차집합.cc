#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	set<int> set_;
	int Asize, Bsize; cin >> Asize >> Bsize;

	for (int i = 0; i < Asize; i++) {
		int num; cin >> num;
		set_.insert(num);
	}

	int count = 0;
	for (int i = 0; i < Bsize; i++) {
		int num; cin >> num;
		if (set_.count(num))
			count++;
	}

	cout << Asize + Bsize - count * 2;
}