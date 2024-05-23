#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if(x<8 and y<8){
        if(pow(x,y)>pow(y,x)) cout<<">"<<endl;
        else if(pow(x,y)<pow(y,x)) cout<<"<"<<endl;
        else cout<<"="<<endl;
        return;
    }
    if(x==1 or y==1){
        if(x==y) cout<<"="<<endl;
        else if(x>y) cout<<">"<<endl;
        else cout<<"<"<<endl;
        return;
    }
    if(x<y) cout<<">"<<endl;
    else if(x>y) cout<<"<"<<endl;
    else cout<<"="<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}