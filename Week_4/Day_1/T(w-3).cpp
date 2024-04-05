#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    string ans="";
    map<string,int>mp;
    for(int i=n-1;i>=0;i--){
        string s=a[i];
        int x=s.size();
        if(!mp[a[i]]){
            ans.push_back(s[x-2]);
            ans.push_back(s[x-1]);
        }
        mp[a[i]]++;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}