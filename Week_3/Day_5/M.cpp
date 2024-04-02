#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    string s1,s2; cin>>s1>>s2;
    int x1=0,x2=0;
    if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='L' || s1[s1.size()-1]=='S' && s2[s2.size()-1]=='M' || s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L'){
        cout<<"<"<<endl;
        return;
    }
    else if(s1[s1.size()-1]=='L' && s2[s2.size()-1]=='M' || s1[s1.size()-1]=='M' && s2[s2.size()-1]=='S' || s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S'){
        cout<<">"<<endl;
        return;
    }
    else if(s1==s2){
        cout<<"="<<endl;
        return;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='X') x1++;
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='X') x2++;
    }
    if(s1[s1.size()-1]=='S'){
        if(x1>x2){
            cout<<"<"<<endl;
            return;
        }
        else{
            cout<<">"<<endl;
            return;
 
        }
    }
    if(s1[s1.size()-1]=='L'){
        if(x1>x2){
            cout<<">"<<endl;
            return;
        }
        else{
            cout<<"<"<<endl;
            return;
 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}