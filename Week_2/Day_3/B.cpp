#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int k,s,cnt=0; cin>>k>>s;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int x=s-i-j;
            if(x>=0 and x<=k) cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}