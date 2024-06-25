#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class cmp{
    public:
    bool operator()(auto a,auto b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first>b.first;
    }
};

void solve(){
    ll h,n; cin>>h>>n;
    vector<ll> a(n),b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp> pq;
    ll ans=0;
    for(int i=0;i<n;i++){
        pq.push({1,i});
    }
    while(h>0){
        ans=pq.top().first;
        while(pq.size() and pq.top().first==ans){
            ll cur=pq.top().second;
            pq.pop();
            h-=a[cur];
            pq.push({ans+b[cur],cur});
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}