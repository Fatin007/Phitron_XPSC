class Solution{
    int search(string pat, string txt) {
        unordered_map<char, int> fr1,fr2;
        for(auto x:pat) fr1[x]++;
        int ans=0;
        int n=txt.size();
        int m=pat.size();
        int l=0,r=0; 
        
        while(r<n){
            fr2[txt[r]]++;
            if(r-l+1<m) r++;
            else if(r-l+1==m){
                if(fr1==fr2) ans++;
                fr2[txt[l]]--;
                if(fr2[txt[l]] == 0) fr2.erase(txt[l]);
                l++;
                r++;
            }
        }
        return ans;
    }
};