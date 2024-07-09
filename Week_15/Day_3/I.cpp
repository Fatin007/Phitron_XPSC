#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool Predicate(ll m, ll k, ll n){
    ll x=(n-m)*(n-m+1)/2;
    return x-m>k;
}

void solve(){
    ll n,k; cin>>n>>k;
    ll l=0,r=n+1;
    while(r-l>4){
        ll m=(l+r)/2;
        if(Predicate(m,k,n)) l=m;
        else r=m;
    }
    for(int i=r;i>=l;i--){
        if(Predicate(i,k,n)){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}