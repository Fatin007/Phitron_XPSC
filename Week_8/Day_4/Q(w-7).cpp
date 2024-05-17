#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s; cin>>s;
    int n=s.size();
    int z=0,o=0,baad=0;
    for(auto x:s)  x=='0'?z++:o++;
    for(auto x:s){
        if(x=='0'){
            if(o) o--, baad++;
            else break;
        }
        else{
            if(z) z--, baad++;
            else break;
        }
    }
    cout<<n-baad<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}