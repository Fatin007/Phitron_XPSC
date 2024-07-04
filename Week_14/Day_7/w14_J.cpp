#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,cnt=0; cin>>n;
    string a,b,c; cin>>a>>b>>c;
    for(int i=0;i<n;i++){
        if(a[i]==c[i] or b[i]==c[i]) cnt++;
    }
    cout<<(cnt==n?"NO":"YES")<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}