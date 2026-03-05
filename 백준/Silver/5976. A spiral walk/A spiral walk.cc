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

    int N; in N;
    vector<vector<int>> a(N, vector<int>(N,0));
    int top=0, bot=N-1, lef=0, rig=N-1, cur=1;
    while(top<=bot && lef<=rig){
        for(int j=lef;j<=rig;j++) a[top][j]=cur++;
        for(int i=top+1;i<=bot;i++) a[i][rig]=cur++;
        if(top<bot) for(int j=rig-1;j>=lef;j--) a[bot][j]=cur++;
        if(lef<rig) for(int i=bot-1;i>top;i--) a[i][lef]=cur++;
        top++; bot--; lef++; rig--;
    }
    Fori(N){
        Forj(N){
            out a[i][j];
            if(j+1<N) out " ";
        }
        out "\n";
    }
    return 0;
}