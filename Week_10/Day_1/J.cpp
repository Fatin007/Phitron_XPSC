#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll lcm(ll a,ll b){
    return a/__gcd(a,b)*b;
}

void solve(){
    ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
    ll red=n/a*p;
    ll blue=n/b*q;
    ll common=n/lcm(a,b)*min(p,q);
    cout<<red+blue-common<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}