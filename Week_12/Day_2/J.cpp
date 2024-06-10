#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,cnt=0; cin>>n;
    vector<ll>a(n);
    for(auto &x:a) cin>>x;
    for(int i=0;i<n;i++){
        cnt++;
        if(cnt==a[i]) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}