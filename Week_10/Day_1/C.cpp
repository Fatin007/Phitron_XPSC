#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

vector<bool>prime(10000001,true);
set<ll>primeSquare;
void sieve(){
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<10000001;i++){
        if(prime[i]){
            for(ll j=i*i;j<10000001;j+=i){
                prime[j]=false;
            }
        }
    }
    for(ll i=2;i<10000001;i++){
        if(prime[i]) primeSquare.insert(i*i);
    }
}

void solve(){
    ll n; cin>>n;
    if(primeSquare.count(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve();
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}