#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n][n-1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cin>>a[i][j];
        }
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        // cout<<a[i][n-2]<<endl;
        m[a[i][n-2]]++;
    }
    int last;
    for(auto x:m){
        if(x.second>1){
            last=x.first;
            break;
        }
    }
    int rr=-1;
    for(int i=0;i<n;i++){
        if(a[i][n-2]!=last){
            rr=i;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<a[rr][i]<<" ";
    }
    cout<<last<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}