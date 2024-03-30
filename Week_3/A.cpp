#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    string s,s1=""; cin>>s;
    for(int i=0; i<n; i++){
        if(isupper(s[i])) s[i]=tolower(s[i]);
    }
    s1+=s[0];
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) continue;
        s1+=s[i];
    }
    if(s1=="meow") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}