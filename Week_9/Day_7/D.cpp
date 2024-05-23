#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if(i!=n/i) a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());
    // for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    if(a.size()<=k-1) cout<<-1<<endl;
    else cout<<a[k-1]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}