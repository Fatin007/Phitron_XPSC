#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    int x=a-1;
    int y=abs(b-c)+c-1;
    if(x<y) cout<<"1"<<endl;
    else if(x>y) cout<<"2"<<endl;
    else cout<<"3"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}