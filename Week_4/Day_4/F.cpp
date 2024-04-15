#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>fr(32,0);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        int f_bit=log2(x)+1;
        fr[f_bit]++;
    }
    ll ans=0;
    for(int i=0;i<32;i++){
        ans+=(ll)fr[i]*(fr[i]-1)/2;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}