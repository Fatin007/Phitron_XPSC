#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,k,cnt=0; cin>>n>>k;
    vector<int>v(k);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end(),greater<int>());
    ll cat=0;
    for(auto i:v){
        if(i<=cat) break;
        cat+=n-i;
        cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}