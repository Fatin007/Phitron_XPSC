#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n;
    string s,ans; cin>>n>>s;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            int x=(s[i-2]-'0')*10+s[i-1]-'0';
            char tmp=x-1+'a';
            ans+=tmp;
            i-=2;
        }
        else{
            int x=s[i]-'0';
            char tmp=x-1+'a';
            ans+=tmp;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}