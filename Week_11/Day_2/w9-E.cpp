#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=2; i<=n; i+=2) cout<<i<<" ";
    for(int i=1; i<=n; i+=2) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}