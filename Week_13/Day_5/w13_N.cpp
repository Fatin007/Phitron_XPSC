#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int x,n,m; cin>>x>>n>>m;
    if(m*10>=x){
        cout<<"YES"<<endl;
        return;
    }
    while(n--){
        x/=2;
        x+=10;
    }
    if(m*10>=x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}