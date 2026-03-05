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
    string S; in S;
    ll D,M; in D >> M;

    ll cost=0;
    int i=0;
    while(i<N){
        if(S[i]=='H'||S[i]=='Y'||S[i]=='U'){ i++; continue; }
        int j=i;
        while(j<N && !(S[j]=='H'||S[j]=='Y'||S[j]=='U')) j++;
        ll len=j-i;
        cost += min(len*D, M+D);
        i=j;
    }

    ll h=0,y=0,u=0;
    Fori(N){
        if(S[i]=='H') h++;
        else if(S[i]=='Y') y++;
        else if(S[i]=='U') u++;
    }

    ll hyu=min({h,y,u});

    if(cost==0) out "Nalmeok\n";
    else out cost << "\n";

    if(hyu==0) out "I love HanYang University";
    else out hyu;

    return 0;
}