#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
vector<int>palindrome;

void solve(){
    int n; cin>>n;
    unordered_map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll ans=n;
    for(int i=0;i<n;i++){
        for(auto x:palindrome){
            int tmp=v[i]^x;
            ans+=mp[tmp];
        }
    }
    cout<<ans/2<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(int i=0;i<32768;i++){
        string s=to_string(i);
        string t=s;
        reverse(t.begin(),t.end());
        if(s==t) palindrome.push_back(i);
    }
    // for(auto x:palindrome) cout<<x<<" ";
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}