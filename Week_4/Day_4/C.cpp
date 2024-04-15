#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,k,o=0,cnt=0; cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<k;i++) if(v[i]&1) o++;
    if(o) cnt++;
    for(int i=k;i<n;i++){
        if(v[i]&1) o++;
        if(v[i-k]&1) o--;
        if(o) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}