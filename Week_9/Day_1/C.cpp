#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int prime[1000005];

void solve(){
    ll n; cin>>n;
    if(n==1 || (ll)sqrt(n)*(ll)sqrt(n)!=n) cout<<"NO"<<endl;
    else{
        if(prime[(ll)sqrt(n)]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    prime[0]=prime[1]=1;
    for(int i=2;i<1000005;i++){
        if(prime[i]==0){
            for(int j=2*i;j<1000005;j+=i){
                prime[j]=1;
            }
        }
    }
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}