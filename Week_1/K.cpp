#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll n,p1=0,p2=0,p3=0; cin>>n;
    vector<string>v1,v2,v3;
    map<string,int>mp1,mp2,mp3; 
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v1.push_back(s);
        mp1[s]++;
    }
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v2.push_back(s);
        mp2[s]++;
    }
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v3.push_back(s);
        mp3[s]++;
    }
    for(auto x:v1){
        if(mp2[x] and mp3[x]) p1+=0;
        else if(mp2[x] or mp3[x]) p1+=1;
        else p1+=3;
    }
    for(auto x:v2){
        if(mp1[x] and mp3[x]) p2+=0;
        else if(mp1[x] or mp3[x]) p2+=1;
        else p2+=3;
    }
    for(auto x:v3){
        if(mp1[x] and mp2[x]) p3+=0;
        else if(mp1[x] or mp2[x]) p3+=1;
        else p3+=3;
    }
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}