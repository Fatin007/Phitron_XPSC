#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n),b(m),v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int cnt=0,l=0,r=0;
    while(r<m){
        while(b[r]>a[l] && l<n){
            cnt++;
            l++;
        }
        r++;
        cout<<cnt<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}