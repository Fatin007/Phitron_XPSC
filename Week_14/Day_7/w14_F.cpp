#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,sum=0; cin>>n;
    vector<ll> a(n),b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    sum=accumulate(a.begin(),a.end(),0LL);
    sum+=accumulate(b.begin(),b.end(),0LL);
    sum-=*max_element(b.begin(),b.end());
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}