#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n),b;
    for(auto &x:a) cin>>x;
    map<int ,int> mp;
    for(auto x:a){
        if(x<=n) mp[x]++;
        if(mp[x]>1 or !mp[x]) b.push_back(x);
    }
    sort(b.begin(),b.end(),greater<int>());
    int ans=b.size();
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            int z=b.back();
            b.pop_back();
            if(z%(z-i)!=i){
                ans=-1;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}