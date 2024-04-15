#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,ok=0,vul=0; cin>>n;
    string s,ans=""; cin>>s;
    for(int i=0;i<n/2;i++){
        // cout<<s[i]<<" "<<s[n-i-1]<<endl;
        if(s[i]!=s[n-i-1]) vul++;
        else ok+=2;
    }
    if(n&1) ok++;
    // cout<<ok<<" "<<vul<<endl;
    for(int i=0;i<=n;i++){
        if(i<vul or i>vul+ok) ans+="0";
        else ans+="1";
    }
    if(!(n&1)){
        for(int i=vul+1;i<=n-vul;i+=2) ans[i]='0';
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}