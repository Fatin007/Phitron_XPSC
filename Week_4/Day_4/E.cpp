#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,cnt=0; cin>>n;
    while(n){
        n=n>>1;
        cnt++;
    }
    cout<<(1<<cnt-1)-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}