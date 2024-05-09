#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int mod=1e9+7;

ll bin_exp(ll x,ll y){
    ll res=1;
    while(y>0){
        if(y&1) res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}

void solve(){
    int n,k; cin>>n>>k;
    ll ans=0;
    for(int i=0;i<32;i++){
        if((1<<i)&k) ans=(ans+bin_exp(n,i))%mod;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}