#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int N=2e5+5;

void solve(){
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>a(n+1),l(m+1),r(m+1),d(m+1),dd(m+1,0),ans(n+1,0);
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=m; i++) cin>>l[i]>>r[i]>>d[i];
    for(int i=1;i<=k;i++){
        ll x,y; cin>>x>>y;
        dd[x]++; 
        if(y<m) dd[y+1]--;
    }
    for(int i=1; i<=m; i++){
        dd[i]+=dd[i-1];
        ans[l[i]]+=(dd[i]*d[i]);
        if(r[i]<n) ans[r[i]+1]-=(dd[i]*d[i]);
        // cout<<i<<endl;
    }
    for(int i=1; i<=n; i++) ans[i]+=ans[i-1];
    for(int i=1; i<=n; i++) cout<<a[i]+ans[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}