#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long
#define out cout <<
#define in cin >>
#define endl "\n"
#define Fori(x) for(int i=0;i<(x);++i)
#define Forj(x) for(int j=0;j<(x);++j)

using namespace std;

struct Big {
    static const int BASE = 1000000000;
    vector<int> a;
    Big(long long v=0){ if(v) a.push_back((int)v); }
    bool isZero() const { return a.empty(); }
    void trim(){ while(!a.empty() && a.back()==0) a.pop_back(); }
    void add(const Big& o){
        int n=max(a.size(), o.a.size()); a.resize(n,0);
        long long carry=0;
        for(int i=0;i<n;i++){
            long long s=carry + a[i] + (i<(int)o.a.size()?o.a[i]:0LL);
            a[i]=(int)(s%BASE); carry=s/BASE;
        }
        if(carry) a.push_back((int)carry);
        trim();
    }
    string str() const {
        if(a.empty()) return "0";
        string s=to_string(a.back());
        for(int i=(int)a.size()-2;i>=0;i--){
            string t=to_string(a[i]);
            s += string(9 - (int)t.size(), '0') + t;
        }
        return s;
    }
};

int main() {
    Sync;
    int T; in T;
    vector<int> Ns(T); int mx=0;
    Fori(T){ in Ns[i]; mx=max(mx,Ns[i]); }

    vector<vector<pair<int,int>>> shapesForCell(3);
    for(int r=0;r<=1;r++){
        int a=r, b=r+1;
        pair<int,int> cells[4]={{a,0},{b,0},{a,1},{b,1}};
        for(int omit=0;omit<4;omit++){
            int curBits=0, nextBits=0;
            for(int t=0;t<4;t++) if(t!=omit){
                int rr=cells[t].first, cc=cells[t].second;
                if(cc==0) curBits |= (1<<rr);
                else nextBits |= (1<<rr);
            }
            for(int rr : {a,b}) if(curBits&(1<<rr)) shapesForCell[rr].push_back({curBits,nextBits});
        }
    }

    static Big dp[101][8];
    vector<Big> ans(mx+1);

    for(int N=1;N<=mx;N++){
        for(int i=0;i<=N;i++) Forj(8) dp[i][j]=Big(0);
        dp[0][0]=Big(1);
        for(int col=0;col<N;col++){
            for(int mask=0;mask<8;mask++){
                if(dp[col][mask].isZero()) continue;
                Big ways=dp[col][mask];
                function<void(int,int,int)> dfs=[&](int pos,int cur,int nxt){
                    while(pos<3 && (cur&(1<<pos))) pos++;
                    if(pos==3){
                        if(col==N-1){ if(nxt==0) dp[col+1][0].add(ways); }
                        else dp[col+1][nxt].add(ways);
                        return;
                    }
                    for(auto &sh: shapesForCell[pos]){
                        int addC=sh.first, addN=sh.second;
                        if((cur&addC)==0 && (nxt&addN)==0) dfs(pos, cur|addC, nxt|addN);
                    }
                };
                dfs(0, mask, 0);
            }
        }
        ans[N]=dp[N][0];
    }

    Fori(T) out ans[Ns[i]].str() << endl;
    return 0;
}