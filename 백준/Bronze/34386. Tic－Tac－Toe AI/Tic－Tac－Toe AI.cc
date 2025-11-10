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

    char P; in P;
    vector<string> b(3);
    Fori(3) in b[i];
    auto win = [&](char p)->bool{
        for(int i=0;i<3;++i){
            if(b[i][0]==p && b[i][1]==p && b[i][2]==p) return true;
            if(b[0][i]==p && b[1][i]==p && b[2][i]==p) return true;
        }
        if(b[0][0]==p && b[1][1]==p && b[2][2]==p) return true;
        if(b[0][2]==p && b[1][1]==p && b[2][0]==p) return true;
        return false;
    };
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(b[i][j]=='E'){
                b[i][j]=P;
                if(win(P)){
                    out i+1 spc j+1 << "\n";
                    return 0;
                }
                b[i][j]='E';
            }
        }
    }
    return 0;
}
