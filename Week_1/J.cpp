#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int x,y,z; cin>>x>>y>>z;
    if(z%x==0 or z%y==0){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;;i++){
        if(x*i>z) break;
        for(int j=0;;j++){
            if((x*i+y*j)==z){
                cout<<"YES"<<endl;
                return;
            }
            if((x*i+y*j)>z) break;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}