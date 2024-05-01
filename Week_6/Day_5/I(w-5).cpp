#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s1,s2; cin>>s1>>s2;
    ll n=s1.size(),m=s2.size();
    if(n>m){
        swap(s1,s2);
        swap(n,m);
    }
    int mx=0;
    for(int i=0;i<n;i++){
        string s="";
        for(int j=i;j<n;j++){
            s+=s1[j];
            if(s2.find(s)!=string::npos) mx=max(mx,(int)s.size());
        }
    }
    cout<<n+m-2*mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}