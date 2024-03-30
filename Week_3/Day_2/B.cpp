#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,q; cin>>n>>q;
    vector<ll> a(n+1);
    a[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    while(q--){
        ll l,r,k; cin>>l>>r>>k;
        ll x=(r-l+1)*k;
        if((a[n]-(a[r]-a[l-1])+x)&1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}