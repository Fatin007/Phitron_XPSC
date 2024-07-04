#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n,m; cin>>n>>m;
    string s,c; cin>>s;
    vector<int> a(m);
    for(auto &i:a) cin>>i;
    cin>>c;
    sort(c.begin(),c.end());
    pbds<int> pb;
    map<int,char> mp;
    for(auto i:a) pb.insert(i);
    for(int i=0;i<pb.size();i++){
        // cout<<*pb.find_by_order(i)<<" ";
        mp[*pb.find_by_order(i)]=c[i];
    }
    for(auto [x,y]:mp){
        s[x-1]=y;
    }
    cout<<s<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}