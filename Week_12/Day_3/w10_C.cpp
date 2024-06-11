#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n,ans=0; cin>>n;
    vector<int> a(n);
    pbds<int> s;
    for(auto &i:a) cin>>i;
    for(int i=n-1;i>=0;i--){
        ans+=s.order_of_key(a[i]);
        s.insert(a[i]);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}