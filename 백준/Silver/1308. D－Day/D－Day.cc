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

bool leap(int y){ return (y%400==0) || (y%4==0 && y%100!=0); }

int mdays(int y,int m){
    static int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2) return d[1]+(leap(y)?1:0);
    return d[m-1];
}

long long days_from_1(int y,int m,int d){
    long long res=0;
    for(int yr=1; yr<y; ++yr) res += 365 + (leap(yr)?1:0);
    for(int mm=1; mm<m; ++mm) res += mdays(y,mm);
    res += d;
    return res;
}

int main(){
    Sync;

    int y1,m1,d1,y2,m2,d2;
    in y1 >> m1 >> d1;
    in y2 >> m2 >> d2;

    if (y2 - y1 > 1000) { out "gg\n"; return 0; }
    if (y2 - y1 == 1000){
        if (m2 > m1 || (m2==m1 && d2>=d1)) { out "gg\n"; return 0; }
    }

    long long a = days_from_1(y1,m1,d1);
    long long b = days_from_1(y2,m2,d2);
    out "D-" << (b - a) << "\n";
}
