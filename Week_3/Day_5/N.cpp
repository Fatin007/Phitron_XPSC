#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,sum=0,cur=0,cnt=0;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        sum+=abs(a[i]);
        if(a[i]<0) cur++;
        else if(a[i]==0) continue;
        else cur=0;
        if(cur==1) cnt++;
    }
    cout<<sum<<" "<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}