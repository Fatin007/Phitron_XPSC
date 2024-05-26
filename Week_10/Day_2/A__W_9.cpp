#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    ll l=0,ans=0;
    map<ll,ll> mp;
    for(ll r=0;r<n;r++){
        if(mp.find(a[r])==mp.end()) mp.insert({a[r],r});
        else{
            if(mp[a[r]]>=l) l=mp[a[r]]+1;
            mp[a[r]]=r;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}