#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n; cin>>n;
    string s,r; cin>>s;
    r=s;
    reverse(r.begin(),r.end());
    if(s==r){
        cout<<0<<endl;
        return;
    }
    map<char,vector<int>> ps,pr;
    for(int i=0;i<n;i++){
        ps[s[i]].push_back(i);
        pr[r[i]].push_back(i);
    }
    vector<int>permutation(n);
    for(char c='a';c<='z';c++){
        for(int i=0;i<ps[c].size();i++){
            permutation[pr[c][i]]=ps[c][i];
        }    
    }
    pbds<int>p;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}