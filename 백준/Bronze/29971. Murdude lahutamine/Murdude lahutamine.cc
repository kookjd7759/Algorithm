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

pair<ll,ll> parseFrac(const string& s){
    int p=s.find('/');
    ll a=stoll(s.substr(0,p)), b=stoll(s.substr(p+1));
    return {a,b};
}

int main() {
    Sync;

    string s,t; in s >> t;
    auto [a,b]=parseFrac(s);
    auto [c,d]=parseFrac(t);

    ll num=a*d-c*b, den=b*d;
    ll g=gcd(llabs(num), den);
    num/=g; den/=g;

    bool neg=num<0;
    ll x=llabs(num);
    ll ip=x/den, rem=x%den;

    if(neg) out "-" << ip << "\n";
    else out ip << "\n";

    if(rem==0){
        out "\n";
        return 0;
    }

    out rem << "/" << den << "\n";

    string nmr=to_string(rem), dnm=to_string(den);
    string pre="";
    if(ip>0) pre=(neg?"-":"")+to_string(ip);
    else if(neg) pre="-";

    int W=(int)pre.size()+(int)dnm.size();
    out string(W-(int)nmr.size(),' ') << nmr << "\n";
    out pre << string(dnm.size(),'-') << "\n";
    out string(W-(int)dnm.size(),' ') << dnm;

    return 0;
}