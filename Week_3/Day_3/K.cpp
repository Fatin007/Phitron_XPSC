#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool ok(ll a,ll b,ll c){
    if(a!=b and b!=c and a!=c) return true;
    return false;
}

void solve(){
    ll n,mx=INT_MIN; cin>>n;
    vector<pair<ll,ll>>v1,v2,v3;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        v1.push_back({x,i});
    }
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        v2.push_back({x,i});
    }
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        v3.push_back({x,i});
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    for(int i=n-3;i<n;i++){
        for(int j=n-3;j<n;j++){
            for(int k=n-3;k<n;k++){
                if(ok(v1[i].second,v2[j].second,v3[k].second)){
                    mx=max(mx,v1[i].first+v2[j].first+v3[k].first);
                }
            }
        }
    }
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}