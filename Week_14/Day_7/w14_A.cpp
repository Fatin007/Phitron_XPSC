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
    vector<int> a(n);
    map<int,int> mp;
    for(auto &i:a){
        cin>>i;
        mp[i]++;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]>i+1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}