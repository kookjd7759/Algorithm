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

struct Pt{ int x,y,z; };
struct Node{
    int idx,l=-1,r=-1,sz=1;
    int mnx,mny,mnz,mxx,mxy,mxz;
};

static inline ll sq(ll v){ return v*v; }

static inline ll minDistSq(const Node& nd, int x, int y, int z){
    ll dx=0,dy=0,dz=0;
    if(x<nd.mnx) dx=(ll)nd.mnx-x; else if(x>nd.mxx) dx=(ll)x-nd.mxx;
    if(y<nd.mny) dy=(ll)nd.mny-y; else if(y>nd.mxy) dy=(ll)y-nd.mxy;
    if(z<nd.mnz) dz=(ll)nd.mnz-z; else if(z>nd.mxz) dz=(ll)z-nd.mxz;
    return sq(dx)+sq(dy)+sq(dz);
}

static inline ll maxDistSq(const Node& nd, int x, int y, int z){
    ll dx=max(llabs((ll)x-nd.mnx), llabs((ll)x-nd.mxx));
    ll dy=max(llabs((ll)y-nd.mny), llabs((ll)y-nd.mxy));
    ll dz=max(llabs((ll)z-nd.mnz), llabs((ll)z-nd.mxz));
    return sq(dx)+sq(dy)+sq(dz);
}

int main() {
    Sync;

    int N; in N;
    vector<Pt> pts(N);
    vector<int> ord(N);
    Fori(N){ in pts[i].x >> pts[i].y >> pts[i].z; ord[i]=i; }
    mt19937 rng(712367);
    shuffle(ord.begin(), ord.end(), rng);

    vector<Node> tr; tr.reserve(N);

    auto axisVal = [&](int id, int ax)->int{
        if(ax==0) return pts[id].x;
        if(ax==1) return pts[id].y;
        return pts[id].z;
    };

    function<int(int,int,int)> build = [&](int l, int r, int dep)->int{
        if(l>r) return -1;
        int ax=dep%3, m=(l+r)>>1;
        nth_element(ord.begin()+l, ord.begin()+m, ord.begin()+r+1, [&](int a,int b){ return axisVal(a,ax)<axisVal(b,ax); });
        int me=ord[m], cur=(int)tr.size();
        tr.push_back(Node());
        tr[cur].idx=me;
        tr[cur].l=build(l,m-1,dep+1);
        tr[cur].r=build(m+1,r,dep+1);
        const Pt &p=pts[me];
        tr[cur].mnx=tr[cur].mxx=p.x; tr[cur].mny=tr[cur].mxy=p.y; tr[cur].mnz=tr[cur].mxz=p.z;
        tr[cur].sz=1;
        if(tr[cur].l!=-1){
            const Node &L=tr[tr[cur].l];
            tr[cur].mnx=min(tr[cur].mnx,L.mnx); tr[cur].mxx=max(tr[cur].mxx,L.mxx);
            tr[cur].mny=min(tr[cur].mny,L.mny); tr[cur].mxy=max(tr[cur].mxy,L.mxy);
            tr[cur].mnz=min(tr[cur].mnz,L.mnz); tr[cur].mxz=max(tr[cur].mxz,L.mxz);
            tr[cur].sz+=L.sz;
        }
        if(tr[cur].r!=-1){
            const Node &R=tr[tr[cur].r];
            tr[cur].mnx=min(tr[cur].mnx,R.mnx); tr[cur].mxx=max(tr[cur].mxx,R.mxx);
            tr[cur].mny=min(tr[cur].mny,R.mny); tr[cur].mxy=max(tr[cur].mxy,R.mxy);
            tr[cur].mnz=min(tr[cur].mnz,R.mnz); tr[cur].mxz=max(tr[cur].mxz,R.mxz);
            tr[cur].sz+=R.sz;
        }
        return cur;
    };

    int root=build(0,N-1,0);

    auto solveQuery = [&](int x,int y,int z,ll r2)->int{
        int ans=0;
        static vector<int> st;
        st.clear(); st.push_back(root);
        while(!st.empty()){
            int u=st.back(); st.pop_back();
            if(u==-1) continue;
            const Node &nd=tr[u];
            if(minDistSq(nd,x,y,z)>r2) continue;
            if(maxDistSq(nd,x,y,z)<=r2){ ans+=nd.sz; continue; }
            const Pt &p=pts[nd.idx];
            ll dx=(ll)p.x-x, dy=(ll)p.y-y, dz=(ll)p.z-z;
            if(dx*dx+dy*dy+dz*dz<=r2) ans++;
            int L=nd.l, R=nd.r;
            if(L!=-1 && R!=-1){
                ll dl=minDistSq(tr[L],x,y,z), dr=minDistSq(tr[R],x,y,z);
                if(dl<dr){ st.push_back(R); st.push_back(L); }
                else{ st.push_back(L); st.push_back(R); }
            }else{ if(L!=-1) st.push_back(L); if(R!=-1) st.push_back(R); }
        }
        return ans;
    };

    int M; in M;
    while(M--){
        int x,y,z,r; in x >> y >> z >> r;
        ll r2=1LL*r*r;
        out solveQuery(x,y,z,r2) endl;
    }

    return 0;
}