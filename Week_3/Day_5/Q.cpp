#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,mx=0; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=1;i<n;i++) mx=max(mx,a[i]-a[0]);
    for(int i=0;i<n-1;i++) mx=max(mx,a[n-1]-a[i]);
    // for(int i=1;i<n;i++) mx=max(mx,a[i]-a[i-1]);
    for(int i=1;i<n;i++) mx=max(mx,a[i-1]-a[i]);
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}