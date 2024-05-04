#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
vector<ll>cube;

void solve(){
    ll n; cin>>n;
    for(int i=0;i<10000;i++){
        ll dif=n-cube[i];
        auto flg=binary_search(cube.begin(),cube.end(),dif);
        if(flg){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(ll i=1;i<=10000;i++) cube.push_back(i*i*i);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}