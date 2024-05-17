#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,k,mx=-1; cin>>n>>k;
    vector<int>pos,neg;
    while(n--){
        int x; cin>>x;
        if(x>0) pos.push_back(x);
        else if(x<0) neg.push_back(-x);
        mx=max(mx,abs(x));
    }
    sort(pos.begin(),pos.end(),greater<int>());
    sort(neg.begin(),neg.end(),greater<int>());
    ll ans=0; 
    for(int i=0;i<pos.size();i+=k){
        ans+=2*pos[i];
    }
    for(int i=0;i<neg.size();i+=k){
        ans+=2*neg[i];
    }
    cout<<ans-mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}