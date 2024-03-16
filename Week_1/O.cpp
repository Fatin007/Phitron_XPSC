#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    s+=s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    int cur=0,mx=0;
    bool flg=false;
    for(int i=0;i<2*n;i++){
        if(s[i]==c){
            flg=true;
            // cur++;
        }
        if(s[i]=='g'){
            flg=false;
            mx=max(mx,cur);
            cur=0;
        }
        if(flg) cur++;
    }
    cout<<mx<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}