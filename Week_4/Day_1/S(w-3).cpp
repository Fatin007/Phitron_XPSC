#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,m,h,sum=0; cin>>n>>m>>h;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    ll k=min(n,m);
    for(int i=0;i<k;i++){
        ll x=b[i]*h;
        if(x>a[i]) sum+=a[i];
        else sum+=x;
    }
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}