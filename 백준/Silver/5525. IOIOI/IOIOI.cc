#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int main(){
	int n, m; cin >> n >> m;
	string st; cin >> st;
	
	int cnt(0);
	bool check = false;
	for (int i = 0; i < m - 2; i++){
		if (st[i] == 'I'){
			if (st[i + 1] == 'O') {
				if (st[i + 2] == 'I'){
					cnt++;
					i += 1;
				}
				else {
					if (cnt) vec.push_back(cnt);
					cnt = 0;
					i += 2;
				}
			}
			else {
				if (cnt) vec.push_back(cnt);
				cnt = 0;
			}
		}
		else {
			if (cnt) vec.push_back(cnt);
			cnt = 0;
		}
	}

	if (cnt) vec.push_back(cnt);
	
	int ret(0);
	for (const auto iter : vec)
		if (iter  >= n)
			ret += (iter - (n - 1));
	cout << ret;
}