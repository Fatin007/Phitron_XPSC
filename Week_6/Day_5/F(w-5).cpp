#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        for(ll j=0;j<=30;j++){
            if(x&(1<<j)) mp[j]++;
        }
    }
    for(ll i=1;i<=n;i++){
        bool flg=true;
        for(ll j=0;j<=30;j++){
            if(mp[j]%i){
                flg=false;
                // break;
            }
        }
        if(flg) cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}