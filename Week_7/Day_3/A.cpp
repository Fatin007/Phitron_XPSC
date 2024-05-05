#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,z=0,o=0; cin>>n;
    string s; cin>>s;
    for(auto x:s){
        if(x=='0') z++;
        else o++;
    }
    if(min(o,z)&1) cout<<"Zlatan"<<endl;
    else cout<<"Ramos"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}