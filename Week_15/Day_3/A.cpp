#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    if(n&1){
        ll x=1;
        for(int i=1;i<n;i+=2){
            a[i]=x;
            x++;
        }
        x=1;
        for(int i=2;i<n;i+=2){
            a[i]=x;
            x++;
        }
    }
    else{
        ll x=1;
        for(int i=0;i<n;i+=2){
            a[i]=x;
            x++;
        }
        x=1;
        for(int i=1;i<n;i+=2){
            a[i]=x;
            x++;
        }
    }
    if(((n+1)/2)&1){
        for(int i=0;i<n-2;i+=2) a[i] |= (1ll<<30);
        for(int i=2;i<n;i+=2) a[i] |= (1ll<<29);
    }
    else{
        for(int i=0;i<n;i+=2) a[i] |= (1ll<<30);
    }
    for(auto x: a) cout<<x<<" "; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}