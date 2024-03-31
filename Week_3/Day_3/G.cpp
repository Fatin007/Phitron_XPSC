#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,cnt=0; cin>>n;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    for(auto x:a){
        if(mp[x]){
            cnt++;
            while(mp[x]){
                mp[x]--;
                x++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}