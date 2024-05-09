#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<ll> a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    ll dif=*max_element(a.begin(),a.end())-*max_element(b.begin(),b.end());
    for(int i=0;i<n;i++){
        a[i]-=dif;
        if(a[i]<0) a[i]=0;
    }
    if(a==b and dif>=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}