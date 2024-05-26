#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

set<int> primeFactors(int n){
    set<int>factors;
    while(n%2==0){
        factors.insert(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            factors.insert(i);
            n/=i;
        }
    }
    if(n>2) factors.insert(n);
    return factors;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    unordered_map<ll,ll>mp;
    for(auto x:a){
        set<int>factors=primeFactors(x);
        for(auto y:factors) mp[y]++;
    }
    ll mx=1;
    for(auto [x,y]:mp) mx=max(mx,y);
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}