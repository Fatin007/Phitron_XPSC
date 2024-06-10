#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<vector<int>>a;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int m; cin>>m;
        vector<int>temp(m);
        for(auto &x:temp){
            cin>>x;
            mp[x]++;
        }
        a.push_back(temp);
    }
    ll ans=0;
    for(int k=1;k<=50;k++){
        if(mp.find(k)==mp.end()) continue;
        set<int>st;
        for(int i=0;i<n;i++){
            if(binary_search(a[i].begin(),a[i].end(),k)) continue;
            for(int j=0;j<a[i].size();j++){
                st.insert(a[i][j]);
            }
        }
        ans=max(ans,(ll)st.size());
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}