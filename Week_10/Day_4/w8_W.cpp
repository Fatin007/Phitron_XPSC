#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

set<pair<int,int>>coprimePairs;
void precompute(){
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1) coprimePairs.insert({i,j});
        }
    }
}

void solve(){
    int n; cin>>n;
    vector<int>pos(1001,0);
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        pos[x]=i;
    }
    int ans=-1;
    for(auto [x,y]:coprimePairs){
        if(pos[x] and pos[y]){
            ans=max(ans,pos[x]+pos[y]);
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    precompute();
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}