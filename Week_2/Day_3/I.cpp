#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,d=0,nd=0; cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
        if(mp[x]==1) d++;
        else nd++;
    }
    if(nd&1) d--;
    cout<<d<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}