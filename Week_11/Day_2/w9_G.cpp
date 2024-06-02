#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if((x+y)%3!=0 or 2*x<y or 2*y<x) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc; 
    cin>>tc;
    while(tc--) solve();
}