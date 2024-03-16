#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int a,b; cin>>a>>b;
    int mx=max(a,b);
    int mn=min(a,b);
    if(mx-mn>1) cout<<mx*2-1<<endl;
    else cout<<mx+mn<<endl; 
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}