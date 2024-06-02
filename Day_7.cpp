#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b; cin>>a>>b;
    while(true){
        ll x=__gcd(a,b);
        if(x==1) break;
        b/=x;
    }
    cout<<(b==1?"Yes":"No")<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}
