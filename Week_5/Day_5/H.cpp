#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,cnt=0; cin>>n;
    multiset<ll>v;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        if(x<0){
            cnt++;
            x=-x;
        }
        v.insert(x);
    }
    ll sum=accumulate(v.begin(),v.end(),0ll);
    if(cnt&1) sum-=(*v.begin()*2);
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}