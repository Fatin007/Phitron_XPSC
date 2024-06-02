#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s; cin>>s;
    ll n=s.size();
    map<char,ll> mp;
    for(auto i:s) mp[i]++;
    ll e=0,o=0;
    for(auto [x,y]:mp){
        if(y) y&1?o++:e++;
    }
    string ans="";
    if(n&1 and o==1 or !(n&1) and !o){
        char odd;
        for(auto [x,y]:mp){
            if(y&1){odd=x;continue;}
            for(int i=0;i<y/2;i++) ans+=x;
        }
        cout<<ans;
        for(int i=0;i<mp[odd];i++) cout<<odd;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}