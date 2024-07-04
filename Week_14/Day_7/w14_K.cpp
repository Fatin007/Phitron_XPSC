#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b,lcm; cin>>a>>b;
    lcm=(a*b)/__gcd(a,b);
    if(b==lcm) cout<<lcm*(b/a)<<endl;
    else cout<<lcm<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}