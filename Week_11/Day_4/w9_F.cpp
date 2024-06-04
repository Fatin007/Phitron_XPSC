#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll x,y; cin>>x>>y;
    if(x<y){
        if(y&1) cout<<y*y-x+1<<endl;
        else cout<<(y-1)*(y-1)+x<<endl;
    }
    else{
        if(x&1) cout<<(x-1)*(x-1)+y<<endl;
        else cout<<x*x-y+1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}