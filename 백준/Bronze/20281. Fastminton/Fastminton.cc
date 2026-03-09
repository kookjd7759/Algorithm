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

bool GameOver(int l, int r){
    if(l==10||r==10) return true;
    if((l>=5||r>=5)&&abs(l-r)>=2) return true;
    return false;
}

int main() {
    Sync;

    string s; in s;
    int gl=0, gr=0, pl=0, pr=0;
    bool leftServe=true, matchOver=false;

    for(char c:s){
        if(c=='Q'){
            if(matchOver){
                out gl;
                if(gl>gr) out " (winner)";
                out " - " << gr;
                if(gr>gl) out " (winner)";
                out "\n";
            }else{
                out gl << " (" << pl;
                if(leftServe) out "*";
                out ") - " << gr << " (" << pr;
                if(!leftServe) out "*";
                out ")\n";
            }
            continue;
        }

        if(matchOver) continue;

        if(c=='S'){
            if(leftServe) pl++;
            else pr++;
        }else{
            if(leftServe) pr++;
            else pl++;
            leftServe=!leftServe;
        }

        if(GameOver(pl,pr)){
            if(pl>pr) gl++;
            else gr++;
            if(gl==2||gr==2) matchOver=true;
            else{
                leftServe=(pl>pr);
                pl=0, pr=0;
            }
        }
    }

    return 0;
}