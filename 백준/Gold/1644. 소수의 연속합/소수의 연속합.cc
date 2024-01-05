#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

const int range = 4000000;
int *primeNum = new int[range + 1];
vector<int> primeDP;

void makePrime() {
    For1i(range) primeNum[i] = i;

    int size = sqrt(range);
    for (int i = 2; i <= size; i++) {
        if (primeNum[i] == 0) continue;
        for (int j = i * i; j <= range; j += i) 
            primeNum[j] = 0;
    }

    primeDP.push_back(0);
    for (int i = 2; i <= range; i++) 
        if (primeNum[i] != 0) {
            primeDP.push_back(i);
            if (primeDP.size() >= 2)
                primeDP[primeDP.size() - 1] += primeDP[primeDP.size() - 2];
        }
    /*
    for (const int iter : primeDP) out iter endl;
    */
}

int main() {
	Sync;

    makePrime();
    int n; in n;
    int l(0), r(0), ret(0);
    while (true) {
        int sum = primeDP[r] - primeDP[l];
        if (sum < n) r++;
        else if (sum == n) ret++, r++;
        else l++;

        if (r >= primeDP.size()) break;
    }
    out ret;
}