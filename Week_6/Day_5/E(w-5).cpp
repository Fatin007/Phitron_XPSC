#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,l,r,x,cnt=0; cin>>n>>l>>r>>x;
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
    for(int i=0;i<(1<<n);i++){
        int sum=0,mn=INT_MAX,mx=INT_MIN;
        for(int j=0;j<n;j++){
            if(binary[i][j]=='1'){
                sum+=v[j];
                mn=min(mn,v[j]);
                mx=max(mx,v[j]);
            }
        }
        if(sum>=l and sum<=r and mx-mn>=x) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}