#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,pos=-1; cin>>n;
    vector<int>a(n);
    bool flg=true;
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(flg and a[i]<a[i-1]){
            flg=false;
            pos=i;
        }
    }
    cout<<1;
    for(int i=1;i<n;i++){
        if(i<pos) cout<<1;
        else{
            if(a[i]<=a[0]) cout<<1;
            else cout<<0;
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}