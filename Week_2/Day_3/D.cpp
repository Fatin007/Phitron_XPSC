#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int cnt=0;
    string s1,s2; cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}