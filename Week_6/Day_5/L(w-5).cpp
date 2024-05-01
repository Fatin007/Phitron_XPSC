#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll pos=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos+=a[i];
            a[i]=0;
        }
        else if(pos>0){
            if(abs(a[i])<=pos){
                pos+=a[i];
                a[i]=0;
            }
            else{
                a[i]+=pos;
                pos=0;
            }
        }
    }
    cout<<accumulate(a.begin(),a.end(),0LL)*-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}