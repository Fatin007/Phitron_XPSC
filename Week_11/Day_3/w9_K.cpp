#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,x; cin>>n>>x;
    vector<ll> a(n);
    for(auto &i:a) cin>>i;
    map<ll,ll> mp;
    mp[0]=1;
    ll r=0,sum=0,cnt=0;
    while(r<n){
        sum+=a[r];
        cnt+=mp[sum-x];
        mp[sum]++;
        r++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}