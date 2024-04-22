#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,ans=1,cur=0; cin>>n;
    ll k=__lg(n);
    bool flg=false;
    for (int i=k-1;i>=0;i--){
        if((1<<i)&n){
            cur|=(1<<i);
            flg=true;
        }
        else{
            if(flg) ans*=2;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}