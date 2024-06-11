#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(auto &x:a) cin>>x;
    pbds<pair<int,int>> s;
    int l=0,r=0;
    while(r<n){
        s.insert({a[r],r});
        if(r-l+1==k){
            int pos=k/2;
            if(k%2==0) pos--;
            cout<<(*s.find_by_order(pos)).first<<" ";
            s.erase({a[l],l});
            l++;
        }
        r++;
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}