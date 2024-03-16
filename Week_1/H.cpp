#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int s,t,cnt=0; cin>>s>>t;
    for(int a=0;a<=s;a++){
        for(int b=0;b<=s;b++){
            for(int c=0;c<=s;c++){
                if(a+b+c<=s and a*b*c<=t){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    // cin>>tc;
    while(tc--) solve();
}