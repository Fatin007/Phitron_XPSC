#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int N=2e5+5;

void solve(){
    ll n,k,q; cin>>n>>k>>q;
    vector<ll>fr(N,0);
    for(int i=0;i<n;i++){
        ll l,r; cin>>l>>r;
        fr[l]++;
        fr[r+1]--;
    }
    for(int i=1;i<N;i++) fr[i]+=fr[i-1];
    vector<ll>ans(N,0);
    for(int i=0;i<N;i++) ans[i]=fr[i]>=k;
    for(int i=1;i<N;i++) ans[i]+=ans[i-1];
    while(q--){
        ll l,r; cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}
