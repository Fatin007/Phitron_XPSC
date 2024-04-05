#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,q;cin>>n>>q;
    map<int,int>fst,lst;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(!fst[x]) fst[x]=i;
        lst[x]=i;
    }
    while(q--){
        int l,r; cin>>l>>r;
        if(fst[l] && lst[r] && fst[l]<lst[r]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}