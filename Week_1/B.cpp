#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int a,b; cin>>a>>b;
    if(a>=b) cout<<0<<endl;
    else cout<<b-a+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}