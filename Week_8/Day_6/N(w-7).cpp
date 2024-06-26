#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a,fr(n+1,0);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
        fr[x]++;
    }
    for(int i=0;i<=n;i++){
        if(!fr[i]) a.push_back(i);
    }
    int pos=k%(n+1);
    rotate(a.begin(),a.begin()+n-pos,a.end());
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}