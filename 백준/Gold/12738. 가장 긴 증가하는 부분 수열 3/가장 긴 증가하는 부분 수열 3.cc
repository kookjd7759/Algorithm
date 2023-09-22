#include <iostream>
#include <vector>

using namespace std;

int n;
int nList[1000001];
vector<int> vec;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> nList[i];
	
	vec.push_back(nList[1]); 
	for (int i = 2; i <= n; i++){
		if (vec[vec.size() - 1] < nList[i]) vec.push_back(nList[i]);
		else *lower_bound(vec.begin(), vec.end(), nList[i]) = nList[i];
	}
	
	cout << vec.size() << "\n";
}