#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    
    ll n,k,o=0,e=0;
    string s; cin>>n>>k>>s;
    map<char,int> fr;
    for(auto x:s) fr[x]++;
    for(char i='a';i<='z';i++){
        if(fr[i]){
            if(fr[i]&1) o++; 
            else e++;
        }
    }
    if((n-k)&1) o--;
    if(o-k>0) cout<<"NO"<<endl;
    else if((o-k)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}