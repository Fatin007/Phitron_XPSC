#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,q,sum=0; cin>>n>>q;
    vector<ll>v(n),mx(n);
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        if(!i) mx[i]=x;
        else mx[i]=max(mx[i-1],x);
        sum+=x;
        v[i]=sum;
    }
    while(q--){
        ll x; cin>>x;
        auto it=upper_bound(mx.begin(),mx.end(),x);
        int pos=it-mx.begin()-1;
        if(pos>=0) cout<<v[pos]<<" ";
        else cout<<0<<" ";        
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}