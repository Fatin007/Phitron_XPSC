#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,sum=0; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum^=a[i];
    }
    ll mn=sum;
    for(int i=0;i<n;i++){
        mn=min(mn,sum^a[i]);
    }
    cout<<mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}