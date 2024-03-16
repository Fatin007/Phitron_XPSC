#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll x,y,cnt=0; cin>>x>>y;
    while(x<=y){
        x*=2;
        cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}