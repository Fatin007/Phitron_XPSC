#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,sum=0,cnt=0; cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x&1){
            v.push_back(x);
            cnt++;
        }
        else sum+=x;
    }
    sort(v.begin(),v.end(),greater<ll>());
    if(cnt&1) cnt--;
    for(int i=0;i<cnt;i++) sum+=v[i];
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}