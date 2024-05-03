#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool Predicate(vector<ll> &a,ll m,ll t){
    ll sum=0;
    for(auto i:a){
        sum+=m/i;
        if(sum>=t) return true;
    }
    return false;
}

void solve(){
    ll n,t; cin>>n>>t;
    vector<ll> a(n);
    for(auto &i:a) cin>>i;
    ll l=0,r=1e18,ans;
    while(r-l>1){
        ll m=(l+r)/2;
        if(Predicate(a,m,t)){
            r=m;
            ans=m;
        }
        else l=m+1;
    }
    if(Predicate(a,l,t)) ans=l;
    else ans=r;
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}