#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n),b(m),v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int l=0,r=0;
    while(l<n or r<m){
        if(l==n){
            v.push_back(b[r]);
            r++;
            continue;
        }
        if(r==m){
            v.push_back(a[l]);
            l++;
            continue;
        }
        if(a[l]<=b[r]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(b[r]);
            r++;
        }
    }
    for(auto i:v) cout<<i<<" ";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}