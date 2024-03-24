#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,o=0,c=0,cnt=0;
    string s; cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='(') o++;
        else c++;
        if(c>o){
            cnt++;
            o=0;
            c=0;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}