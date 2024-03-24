#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,s,sum=0,mx=0; cin>>n>>s;
    vector<ll>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    ll l=0, r=0;
    while(r<n){
        sum+=a[r];
        if(sum<=s){
            mx=max(mx, r-l+1);
        }
        else{
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}