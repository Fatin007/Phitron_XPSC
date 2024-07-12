#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,cnt=0; cin>>n;
    string s; cin>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
            cnt+=i+1;
        }
    }
    cout<<cnt+n<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}