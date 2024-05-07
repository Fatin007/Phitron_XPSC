#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    ll mn=1e18;
    for(int i=0;i<n;i++){
        ll cur=0;
        if(i+1<n)cur=max(cur,abs(a[i]-a[i+1]));
        if(i-1>=0)cur=max(cur,abs(a[i]-a[i-1]));
        mn=min(mn,cur);
    }
    cout<<mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}