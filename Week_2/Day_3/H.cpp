#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m,mn=INT_MAX; cin>>n>>m;
    vector<string>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int cur=0;
            for(int k=0; k<m; k++){
                cur+=abs(v[i][k]-v[j][k]);
                // cout<<abs(v[i][k]-v[j][k])<<endl;
            }
            mn=min(mn,cur);
        }
    }
    cout<<mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}