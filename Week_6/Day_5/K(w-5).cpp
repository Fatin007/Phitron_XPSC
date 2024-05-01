#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    int m=n*(n-1)/2;
    vector<ll>a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll x=1,i=0;
    while(i<m){
        i+=n-x;
        // cout<<i<<" ";
        cout<<a[i-1]<<" ";
        x++;
    }
    cout<<a[m-1]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}