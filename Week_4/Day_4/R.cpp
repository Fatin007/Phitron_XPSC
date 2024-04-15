#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,mx=INT_MIN,mn=INT_MAX; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    for(int i=0;i<n;i++){
        mx=max(mx,mx|v[i]);
        mn=min(mn,mn&v[i]);
    }
    cout<<mx-mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}