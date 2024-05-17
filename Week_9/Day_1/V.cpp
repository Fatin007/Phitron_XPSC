#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll x,y; cin>>x>>y;
    if(y>1){
        cout<<"YES"<<endl;
        cout<<x*y<<" "<<x<<" "<<(y+1)*x<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}