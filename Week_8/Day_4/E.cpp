#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool isPalindrome(string s){
    string t=s;
    reverse(t.begin(),t.end());
    return s==t;
}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(isPalindrome(s)){
        cout<<0<<endl;
        return;
    }
    map<char,int> mp;
    for(auto x:s) mp[x]++;
    int mn=INT_MAX;
    for(auto [x,y]:mp){
        int l=0, r=n-1, cnt=0;
        while(l<=r){
            if(s[l]!=s[r] and (s[l]==x or s[r]==x)){
                cnt++;
                (s[l]==x)?l++:r--;
            }
            else if(s[l]==s[r]){
                l++; r--;
            }
            else{
                cnt=INT_MAX;
                break;
            }
        }
        mn=min(mn,cnt);
    }
    if(mn==INT_MAX) cout<<-1<<endl;
    else cout<<mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}