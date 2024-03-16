#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,ans=0; cin>>n;
    for(int i=1;i<=n;i++){
        ans^=i;
    }
    n--;
    while(n--){
        ll x; cin>>x;
        ans^=x;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}