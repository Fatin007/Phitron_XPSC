#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool Predicate(vector<ll> &a,ll k){
    multiset<ll>s;
    for(auto i:a) s.insert(i);
    for(int i=1;i<=k;i++){
        if(!s.size()) return false;
        ll x=k-i+1;
        auto it=s.upper_bound(x);
        if(it==s.begin()) return false;
        s.erase(--it);
        if(s.size()){
            it=s.begin();
            ll first=(*it);
            first+=x;
            s.erase(it);
            s.insert(first);
        }
    }
    return true;
}

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto &i: a) cin>>i;
    sort(a.begin(), a.end());
    ll l=0;
    ll r=n;
    while(r-l>1){
        ll m=(l+r)/2;
        if(Predicate(a,m)) l=m;
        else r=m-1;
    }
    if(Predicate(a,r)) l=r;
    cout<<l<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}