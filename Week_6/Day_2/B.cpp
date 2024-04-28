#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s; cin>>s;
    ll cnt=2,cst=0;
    vector<int>ans;
    int n=s.size();
    vector<pair<int,int>> v;
    for(int i=1;i<n-1;i++){
        if(s[i]>=s[0] and s[i]<=s[n-1] or s[i]<=s[0] and s[i]>=s[n-1]){
            pair<int,int> p={s[i]-'a'+1,i+1};
            v.push_back(p);
            cnt++;
        }
    }
    sort(v.begin(),v.end());
    if(s[0]>s[n-1]) reverse(v.begin(),v.end());
    cst=abs(s[0]-s[n-1]);
    cout<<cst<<" "<<cnt<<endl;
    cout<<1<<" ";
    for(auto x:v) cout<<x.second<<" ";
    cout<<n<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}