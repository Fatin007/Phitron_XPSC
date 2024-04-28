#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,m; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                b[j]=INT_MAX;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}