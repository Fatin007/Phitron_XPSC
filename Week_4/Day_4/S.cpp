#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<string>binary;
    for(int i=0;i<(1<<n);i++){
        string s="";
        for(int j=0;j<n;j++){
            if(i&(1<<j)) s+='1';
            else s+='0';
        }
        binary.push_back(s);
    }
    // for(auto x:binary) cout<<x<<endl;
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(binary[i][j]=='1') sum+=v[j];
            else sum-=v[j];
        }
        if(sum%360==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}