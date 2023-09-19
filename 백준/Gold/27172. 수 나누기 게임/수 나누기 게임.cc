#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int cnt[1000001];
bool check[1000001];
int list[100001];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(cnt, 0, sizeof(cnt)); memset(check, false, sizeof(check));
	
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int num; cin >> num;
		list[i] = num;
		check[num] = true;
	}
	
	for (int i = 0; i < n; i++){
		int num = list[i];
		for (int j = (num << 1); j < 1000001; j += num){
			if (check[j]){
				cnt[num]++;
				cnt[j]--;
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		cout << cnt[list[i]] << " ";
	}
}