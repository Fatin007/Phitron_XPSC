#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,mx=-1,ans=0,cur; cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    // cout<<mx<<endl;
    if(mx==n){
        cout<<0<<endl;
        return;
    }
    cur=mx;
    while(cur<n){
        ans++;
        if(n-cur<cur){
            ans+=(n-cur);
            break;
        }
        ans+=cur;
        cur+=cur;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}