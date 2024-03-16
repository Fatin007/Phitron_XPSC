#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> a(n),b(m),v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    ll ans=0,l=0,r=0;
    while(l<n && r<m){
        ll cnt1=0,cnt2=0,cur=a[l];
        while(a[l]==cur && l<n){
            l++;
            cnt1++;
        }
        while(cur>b[r] && r<m){
            r++;
        }
        while(b[r]==cur && r<m){
            r++;
            cnt2++;
        }
        ans+=cnt1*cnt2;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}