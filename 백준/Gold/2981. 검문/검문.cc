#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100];

int gcd(int a, int b){
	int temp = a % b;
	return temp ? gcd(b, temp) : b;
}

int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	
	int max_m = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
		max_m = gcd(max_m, arr[i] - arr[i - 1]);
	
	vector<int> vec;
	for (int i = 1; i * i <= max_m; i++)
		if (max_m % i == 0) {
			vec.push_back(i);
			int temp = max_m / i;
			if (i != temp) vec.push_back(temp);
		}
	sort(vec.begin(), vec.end());
	for (int i = 1; i < vec.size(); i++)
		cout << vec[i] << " ";
}
	