#include <bits/stdc++.h>
#define ll long long
#define endl ""<<endl
using namespace std;

void solve(){
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(int i=0;i<n;i++){
        if(s1[i]=='G') s1[i]='B';
        if(s2[i]=='G') s2[i]='B';
    }
    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}