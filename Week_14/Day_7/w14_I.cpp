#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,l=-1,r=-1; cin>>n;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            l=i+1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            r=i+1;
            break;
        }
    }
    if(l==-1 and r==-1){
        cout<<0<<endl;
        return;
    }
    cout<<r-l+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}