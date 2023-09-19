#include <iostream>

using namespace std;

int list[100001];
int n;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> list[i];
	
	int start = 0, end = n - 1;
	int ret_start = start, ret_end = end;
	int mini(2100000000);
	while(start < end){
		int num = list[start] + list[end];
		int num_abs = abs(num);
		if (mini > num_abs){
			mini = num_abs;
			ret_start = start;
			ret_end = end;
			
			if (num_abs == 0) break;
		}
		
		if (num < 0) start++;
		else end--;
	}
	cout << list[ret_start] << " " << list[ret_end] << "\n";
}