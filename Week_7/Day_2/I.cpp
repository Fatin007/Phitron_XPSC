#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool Predicate(vector<ll> &a,ll m,ll k){
    int n=a.size();
    ll sum=0;
    for(int i=n/2;i<n;i++){
        sum+=max(0ll,m-a[i]);
    }
    return sum<=k;
}

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(auto &i:a) cin>>i;
    sort(a.begin(),a.end());
    ll l=a[n/2];
    ll r=a[n/2]+k;
    while(r-l>1){
        ll m=(l+r)/2;
        if(Predicate(a,m,k)) l=m;
        else r=m;
    }
    cout<<l<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}