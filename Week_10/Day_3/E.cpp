#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

void solve(){
    ll n,ans; cin>>n;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            if(lcm(i,n/i)==n) ans=i;
        }
    }
    cout<<ans<<" "<<n/ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}