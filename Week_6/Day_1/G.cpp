#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,c,ans=0; cin>>n>>c;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=i+1;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(c>=a[i]){
            c-=a[i];
            ans++;
        }
        else break;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}