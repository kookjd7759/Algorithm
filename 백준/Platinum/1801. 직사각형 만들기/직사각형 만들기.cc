#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int N;
int num[17];
int anw = 0;
map<pair<int,int>, vector<pair<int,int>>> dp1;
map<tuple<int,int,int,int,int, int>, int> dic;

void dp(int n, int l, int a, int b, int tmp1, int tmp2){
    if(dic.find({n,l,a,b,tmp1,tmp2}) != dic.end()) return;
    dic[{n,l,a,b,tmp1,tmp2}] = 1;
    if(n == l){
        if(l == (N / 2)){
            if(a < b) return;
            if(dp1.find({a,b}) == dp1.end()){
                vector<pair<int,int>> v;
                dp1[{a,b}] = v;
            }
            dp1[{a,b}].push_back({tmp1, tmp2});
        }
        else{
            if(a > b) return;
            if(dp1.find({-a,-b}) != dp1.end()){
                for(int i = 0; i < dp1[{-a,-b}].size(); i++){
                    int t1 = dp1[{-a, -b}][i].first;
                    int t2 = dp1[{-a, -b}][i].second;
                    anw = max(anw, (tmp1 + t1) * (tmp2+t2));
                }
            }
        }
        return ;
    }
    dp(n + 1, l, a, b, tmp1, tmp2);
    dp(n + 1, l, a + num[n], b, tmp1 + num[n], tmp2);
    dp(n + 1, l, a - num[n], b, tmp1, tmp2);
    dp(n + 1, l, a, b + num[n], tmp1, tmp2 + num[n]);
    dp(n + 1, l, a, b - num[n], tmp1, tmp2);
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++) cin >> num[i];
    dp(0, N / 2, 0, 0, 0, 0); dp(N / 2, N, 0, 0, 0, 0);
    cout << (anw == 0 ? -1 : anw);
}