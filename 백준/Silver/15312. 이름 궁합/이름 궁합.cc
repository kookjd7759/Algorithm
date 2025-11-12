#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    string A,B; in A; in B;
    int stroke[26] = {3,2,1,2,3,3,2,3,3,2,2,1,2,2,1,2,2,2,1,2,1,1,1,2,2,1};
    int n = (int)A.size();
    vector<int> v; v.reserve(2*n);
    Fori(n){ v.push_back(stroke[A[i]-'A']); v.push_back(stroke[B[i]-'A']); }
    while(v.size()>2){
        vector<int> nxt; nxt.reserve(v.size()-1);
        Fori((int)v.size()-1) nxt.push_back((v[i]+v[i+1])%10);
        v.swap(nxt);
    }
    out v[0] << v[1]; ent;
}
