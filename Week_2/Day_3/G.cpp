#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    string s="Timru", x; cin>>x;
    sort(x.begin(),x.end());
    //cout<<s<<' '<<x<<endl;
    if(s==x) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}