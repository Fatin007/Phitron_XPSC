#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,b; cin>>n>>b;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int AND=INT_MAX;
    for(int i=0;i<n;i++){
        if((v[i]&b)==b){ 
            AND&=v[i]; 
        }
    }
    if(AND==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}