#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s,t; cin>>s>>t;
    vector<int> vs,vt,cs,ct;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') vs.push_back(i);
        else cs.push_back(i);
    }
    for(int i=0;i<t.size();i++){
        if(t[i]=='a' or t[i]=='e' or t[i]=='i' or t[i]=='o' or t[i]=='u') vt.push_back(i);
        else ct.push_back(i);
    }
    if(vs==vt and cs==ct) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}