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

bool isPrime(int x){
    if(x<2) return false;
    for(int i=2;i*i<=x;i++) if(x%i==0) return false;
    return true;
}

int main() {
    Sync;

    int n; in n;
    while(n--){
        int v; in v;
        out "Input value: " << v << "\n";
        if(isPrime(v)){
            out "Would you believe it; it is a prime!\n\n";
        } else {
            int d=1;
            while(true){
                if((v-d>=2 && isPrime(v-d)) || isPrime(v+d)) break;
                d++;
            }
            out "Missed it by that much (" << d << ")!\n\n";
        }
    }

    return 0;
}