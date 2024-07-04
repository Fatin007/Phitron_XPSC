#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> a(n),b(n);
    map<ll, ll>mp;
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    for(ll j=0;j<n;j++){
        ll rem=b[j]%m;
        mp[rem]++;
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll rem=a[i]%m;
        ll lagbe=(m-rem)%m;
        if(mp.find(lagbe)!=mp.end()){
            cnt+=mp[lagbe];
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}