#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        if(i%4<2) s+='a';
        else s+='b'; 
    }
    cout<<s<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}