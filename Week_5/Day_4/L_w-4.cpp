#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,ans=0,XORRR=0; cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    for(ll i=0;i<n;i++){
        if(XORRR<a[i]){
            XORRR=0;
            ans++;
        }
        XORRR^=a[i];
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll tc=1;
    cin>>tc;
    while(tc--) solve();
}