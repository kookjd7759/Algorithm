#include <iostream>

using namespace std;

int table[302][302]{0, };

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a >> b;
	int aA[1000001]; for (int i = 0; i < a; i++) cin >> aA[i];
	int bA[1000001]; for (int i = 0; i < b; i++) cin >> bA[i];
	int ai(0), bi(0);
	while(true){
		if (ai == a){
			for (int i = bi; i < b; i++) cout << bA[i] << " ";
			break;
		}
		if (bi == b){
			for (int i = ai; i < a; i++) cout << aA[i] << " ";
			break;
		}
		if (aA[ai] <= bA[bi])
			cout << aA[ai++] << " ";
		else 
			cout << bA[bi++] << " ";
	}
}