#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s,t; cin>>s>>t;
    int n=s.size(), m=t.size();
    if(s==t){
        cout<<"YES"<<endl;
        cout<<s<<endl;
        return;
    }
    if(s[0]==t[0]){
        cout<<"YES"<<endl;
        cout<<s[0]<<"*"<<endl;
        return;
    }
    if(s[n-1]==t[m-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<s[n-1]<<endl;
        return;
    }
    string x="";
    for(int i=0; i<n-1; i++){
        string cur="";
        cur+=s[i];
        cur+=s[i+1];
        if(t.find(cur)!=string::npos){
            x=cur;
            break;
        }
    }
    if(x=="")  cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<"*"<<x<<"*"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}