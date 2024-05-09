#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s; cin>>s;
    int n=s.size();
    vector<pair<char,bool>>v(n);
    stack<pair<char,int>>cap,sm;
    for(int i=0;i<n;i++){
        pair<char,bool>x={s[i],true};
        v[i]=x;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='b' and s[i]!='B'){
            if(isupper(s[i])) cap.push({s[i],i});
            else sm.push({s[i],i});
        }
        else if(s[i]=='b'){
            v[i].second=false;
            if(sm.size()){
                v[sm.top().second].second=false;
                sm.pop();
            }
        }
        else if(s[i]=='B'){
            v[i].second=false;
            if(cap.size()){
                v[cap.top().second].second=false;
                cap.pop();
            }
        }
    }
    for(auto [x,y]:v){
        if(y) cout<<x;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}