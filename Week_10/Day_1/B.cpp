#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll l,r; cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l; i<=r; i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}