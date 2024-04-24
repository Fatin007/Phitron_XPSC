#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b,n,sum=0; cin>>a>>b>>n;
    vector<ll>v(n);
    sum=b;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>=a) sum+=a-1;
        else sum+=v[i];
    }
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}