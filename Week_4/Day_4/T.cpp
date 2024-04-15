#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<m+1;i++) cin>>v[i];
    string fed="";
    while(v[m]){
        fed+=to_string(v[m]%2);
        v[m]/=2;
    }
    while(fed.size()<n) fed+='0';
    reverse(fed.begin(),fed.end());

    vector<string>binary;
    for(int i=0;i<m;i++){
        string s="";
        while(v[i]){
            s+=to_string(v[i]%2);
            v[i]/=2;
        }
        while(s.size()<n) s+='0';
        reverse(s.begin(),s.end());
        binary.push_back(s);
    }

    int cnt=0;
    for(int i=0;i<m;i++){
        int diff=0;
        for(int j=0;j<n;j++) if(binary[i][j]!=fed[j]) diff++;
        if(diff<=k) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}