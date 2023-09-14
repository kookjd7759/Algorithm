#include <iostream>
#include <cstdlib>

using namespace std;

int list[5000001];

int comp(const void* a, const void* b) { 
    return *(int*)a - *(int*)b; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> list[i];
	qsort(list, n, sizeof(*list), comp);
	cout << list[k - 1];
}