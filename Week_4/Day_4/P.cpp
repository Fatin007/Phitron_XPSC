#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    ll k=__lg(n-1);
    for(ll i=(1<<k)-1;i>=0;i--) cout<<i<<" ";
    for(ll i=(1<<k);i<n;i++) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}