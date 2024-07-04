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
    int l=1,r=n;
    if(n%2==0){
        for(int i=0;i<n;i++){
            if(i%2) a[i]=r--;
            else a[i]=l++;
        }
    }
    else{
        r--;
        for(int i=0;i<n-1;i++){
            if(i%2) a[i]=r--;
            else a[i]=l++;
        }
        a[n-1]=n;
    }
    for(auto &i:a) cout<<i<<" "; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}