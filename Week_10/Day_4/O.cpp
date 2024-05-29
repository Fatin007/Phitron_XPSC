#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    int n,x,y; cin>>n;
    x=n+1;
    while(!isPrime(x)) x++;
    y=x+n;
    while(!isPrime(y)) y++;
    ll lcm=x*y/__gcd(x,y);
    cout<<lcm<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}