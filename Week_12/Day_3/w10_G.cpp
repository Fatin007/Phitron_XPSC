#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &[x,y]:a) cin>>x>>y;
    sort(a.begin(),a.end());
    pbds<int>pb;
    for(auto [x,y]:a) pb.insert(y);
    ll ans=0;
    for(auto [x,y]:a){
        pb.erase(y);
        ans+=pb.order_of_key(y);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}