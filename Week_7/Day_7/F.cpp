#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<ll> a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(b[i]-a[i]!=0 and b[i]-a[i]!=1){
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