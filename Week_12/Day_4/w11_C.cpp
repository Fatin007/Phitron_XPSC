#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int>d(n);
    while(q--){
        int l,r; cin>>l>>r;
        l--;
        d[l]++;
        if(r<n) d[r]--;
    }
    for(int i=1;i<n;i++) d[i]+=d[i-1];
    sort(a.rbegin(),a.rend());
    sort(d.rbegin(),d.rend());
    ll ans=0;
    for(int i=0;i<n;i++) ans+=1ll*a[i]*d[i];
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}