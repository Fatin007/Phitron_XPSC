#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    map<int,int>pf;
    for(auto x:a){
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                int cnt=0;
                while(x%j==0){
                    pf[j]++;
                    x/=j;
                }
            }
        }
        if(x>1) pf[x]++;
    }
    for(auto [x,y]:pf){
        if(y%n){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}