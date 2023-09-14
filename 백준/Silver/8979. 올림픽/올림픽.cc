#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Score {
	int name, g, s, b;
};

bool comp(const Score& a, const Score& b){
	if (a.g == b.g)
		if (a.s == b.s)
			return a.b > b.b;
		else
			return a.s > b.s;
	else
		return a.g > b.g;
}

vector<Score>* vec;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k; cin >> n >> k;
	vec = new vector<Score>(n);
	for (int i = 0; i < n; i++){
		cin >> vec->at(i).name;
		cin >> vec->at(i).g;
		cin >> vec->at(i).s;
		cin >> vec->at(i).b;
	}
	sort(vec->begin(), vec->end(), comp);
	int rank = 1;
	for (int i = 1; i < n; i++){
		if (vec->at(i - 1).g != vec->at(i).g || vec->at(i - 1).s != vec->at(i).s || vec->at(i - 1).b != vec->at(i).b)
			rank++;
		if (vec->at(i).name == k){
			cout << rank;
			break;
		}
	}
}