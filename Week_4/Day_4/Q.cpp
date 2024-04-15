#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,AND; cin>>n>>AND;
    n--;
    while(n--){
        int x; cin>>x;
        AND&=x;
    }
    cout<<AND<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}