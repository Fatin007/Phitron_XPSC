#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool isPrime(ll n){
    if(n<2) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    ll n,ans; cin>>n;
    if(isPrime(n)) ans=1;
    else if(n&1){
        if(isPrime(n-2)) ans=2;
        else ans=3;
    }
    else ans=2;
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}