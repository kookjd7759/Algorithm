#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long
#define out cout <<
#define in cin >>
#define endl "\n"
#define Fori(x) for(int i=0;i<(x);++i)

using namespace std;

int idxNote(const string& s){
    char a=s[0];
    int v=0;
    if(a=='A') v=0;
    else if(a=='B') v=2;
    else if(a=='C') v=3;
    else if(a=='D') v=5;
    else if(a=='E') v=7;
    else if(a=='F') v=8;
    else if(a=='G') v=10;
    for(int i=1;i<(int)s.size();++i){
        if(s[i]=='#') v++;
        else if(s[i]=='b') v--;
    }
    v%=12; if(v<0) v+=12;
    return v;
}

int main() {
    Sync;
    vector<string> canon = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
    string line;
    while (getline(cin, line)) {
        if(line.size() && line.back()=='\r') line.pop_back();
        if(line=="***") break;
        stringstream ss(line);
        vector<string> notes; string t;
        while (ss>>t) notes.push_back(t);
        string dline; getline(cin,dline); if(dline.size() && dline.back()=='\r') dline.pop_back();
        int d=stoi(dline);
        int shift=((d%12)+12)%12;
        for(int i=0;i<(int)notes.size();++i){
            int v=idxNote(notes[i]);
            v=(v+shift)%12;
            if(i) out " ";
            out canon[v];
        }
        out endl;
    }
    return 0;
}