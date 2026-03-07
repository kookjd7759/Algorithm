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

    int n; in n;
    while(n--){
        string a; in a;
        if(a=="rectangle"){
            int r,c; char f; in r >> c >> f;
            Fori(r){
                Forj(c){
                    if(f=='y'||i==0||i==r-1||j==0||j==c-1) out "#";
                    else out " ";
                }
                ent;
            }
        } else if(a=="diamond"){
            int s; char f; in s >> f;
            int m=s/2;
            Fori(s){
                int d=abs(m-i), w=s-2*d;
                Forj(d) out " ";
                Forj(w){
                    if(f=='y'||w==1||j==0||j==w-1) out "#";
                    else out " ";
                }
                ent;
            }
        } else {
            string b; in b;
            int s; char f; in s >> f;
            if(a=="left"){
                For1i(s){
                    Forj(i){
                        if(f=='y'||i==1||i==s||j==0||j==i-1) out "#";
                        else out " ";
                    }
                    ent;
                }
            } else {
                For1i(s){
                    Forj(s-i) out " ";
                    Forj(i){
                        if(f=='y'||i==1||i==s||j==0||j==i-1) out "#";
                        else out " ";
                    }
                    ent;
                }
            }
        }
    }

    return 0;
}