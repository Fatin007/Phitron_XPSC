#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    if(!a[0]&1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]%(i+2)) continue;
        int cnt=0;
        for(int j=0;j<i;j++){
            if(a[i]%(j+2)==0) cnt++;
            else break;
        }
        // cout<<i<<" "<<cnt<<endl;
        if(cnt==i){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}