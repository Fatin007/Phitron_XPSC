#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,a,b; cin>>n>>a>>b;
    ll l=0;
    ll r=min(a,b);
    while(l<r){
        ll m=(l+r+1)/2;
        if(a/m+b/m>=n) l=m;
        else r=m-1;
    }
    cout<<l<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}