#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const int N=2e5+10; 
vector<int>graph[N];
vector<int>leaf(N,0);

void dfs(int src,int par){
    // cout<<src<<" "<<par<<endl;
    bool isLeaf=true;
    for(auto x:graph[src]){
        if(x!=par){
            isLeaf=false;
            dfs(x,src);
            leaf[src]+=leaf[x];
        }
    }
    if(isLeaf) leaf[src]=1;
}

void solve(){
    int n; cin>>n;
    for(int i=0;i<=n;i++) graph[i].clear();
    for(int i=0;i<=n;i++) leaf[i]=0;
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        graph[x].push_back(y);;
        graph[y].push_back(x);;
    }
    dfs(1,-69);
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        cout<<1ll*leaf[x]*leaf[y]<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}