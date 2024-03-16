#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int x,y,z; cin>>x>>y>>z;
    if(x<=y/z*z) cout<<y/z*z<<endl;
    else cout<<-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}