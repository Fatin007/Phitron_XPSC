#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    if(n&1){
        for(int i=0;i<n;i++) cout<<69696969<<" "; cout<<endl;
        return;
    }
    cout<<"1 3 ";
    for(int i=2;i<n;i++) cout<<"2 "; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}