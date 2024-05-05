#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll Predicate(){
    
}

void solve(){
    ll n,q,sum=0; cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    // sort(v.begin(),v.end());
    while(q--){
        ll x; cin>>x;
        // auto it=upper_bound(v.begin(),v.end(),x);
        // cout<<accumulate(v.begin(),it,0ll)<<" ";
        ll l=0, r=sum;
        while(r-l>1){
            ll m=(l+r)/2;

        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}