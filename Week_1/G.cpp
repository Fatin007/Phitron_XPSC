#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s; cin>>s;
    map<char,int> mp;
    for(auto i:s) mp[i]++;
    for(char i='a';i<='z';i++){
        if(mp[i]==0){
            cout<<i<<endl;
            return;
        }
    }
    cout<<"None"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}