#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    while(k--){
        int x; cin>>x;
        auto it=lower_bound(a.begin(),a.end(),x);
        auto it1=upper_bound(a.begin(),a.end(),x);
        if(it!=it1) cout<<it-a.begin()+1<<endl;
        else cout<<it-a.begin()<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}