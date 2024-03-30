#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,x,y,cnt=0,ans=0; cin>>n>>x>>y;
    while(n--){
        ll a; cin>>a;
        if(a<=y) cnt++;
        else cnt=0;
        if(cnt>=x) ans+=(cnt-x+1);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}