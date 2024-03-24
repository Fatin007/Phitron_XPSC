#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int x;
        string s; cin>>x>>s;
        for(int j=0;j<x;j++){
            if(s[j]=='U'){
                if(a[i]==0) a[i]=9;
                else a[i]-=1;
            }
            else{
                if(a[i]==9) a[i]=0;
                else a[i]+=1;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}