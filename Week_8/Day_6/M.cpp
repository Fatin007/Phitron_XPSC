#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

vector<int>power(31);

void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n),x;
    for(auto &i:a) cin>>i;
    for(int i=0;i<q;i++){
        int y; cin>>y;
        if(i==0 or x.back()>y) x.push_back(y);
    }
    for(auto &i:x){
        for(auto &j:a){
            if(j%power[i]==0){
                j+=power[i-1];
            }
        }
    }
    for(auto i:a) cout<<i<<" "; cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    power[0]=1;
    for(int i=1;i<31;i++) power[i]=power[i-1]*2;
    // for(int i=0;i<31;i++) cout<<power[i]<<" "; cout<<endl;
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}