#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,s,sum=0,ans=0; cin>>n>>s;
    vector<ll>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    ll l=0, r=0;
    while(r<n){
        sum+=a[r];
        if(sum<=s){
            ans+=r-l+1;
        }
        else{
            while(sum>s and l<r){
                sum-=a[l];
                l++;
            }
            if(sum<=s){
                ans+=r-l+1;
            }
        }
        r++;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}