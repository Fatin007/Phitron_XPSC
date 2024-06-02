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
        if(y){
            if(y&1) o++;
            else e++;
        }
    }
    if(n&1 and o>1 or !(n&1) and o){
       cout<<"NO SOLUTION"<<endl;
       return;
    }
    string ans="";
    char odd;
    for(auto [x,y]:mp){
        if(y&1) odd=x;
        for(int i=0;i<y/2;i++) ans+=x;
    }
    int l=ans.size();
    for(int i=0;i<mp[odd];i++) ans+=odd;
    for(int i=l-1;i>=0;i--) ans+=ans[i];
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}