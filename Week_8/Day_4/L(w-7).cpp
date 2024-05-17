#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>a(n),v;
    for(auto &x:a) cin>>x;
    bool flg=true;
    v.push_back(a[0]);
    cout<<1;
    for(int i=1;i<n;i++){
        if(flg){
            if(a[i]>=v.back()){
                v.push_back(a[i]);
                cout<<1;
            }
            else if(a[i]<=v[0]){
                v.push_back(a[i]);
                flg=false;
                cout<<1;
            }
            else cout<<0;
        }
        else{
            if(a[i]>=v.back() and a[i]<=v[0]){
                v.push_back(a[i]);
                cout<<1;
            }
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