#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>>n;
    int a[n],freq[200005]={0},ans[200005]={0},mx=0;
    for (ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=n) freq[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]==0) continue;
        for (int j=i;j<=n;j+=i){
            ans[j]+=freq[i];
        }
    }
    for (int i=0;i<=n;i++) mx=max(ans[i],mx);
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}