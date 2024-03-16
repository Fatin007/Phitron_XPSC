class Solution{
    public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum=0,mx=INT_MIN;
        int i=0;
        for(i;i<K;i++){
            sum+=Arr[i];
        }
        mx=max(mx,sum);
        for(i;i<N;i++){
            sum=sum+Arr[i]-Arr[i-K];
            mx=max(mx,sum);
        }
        return mx;
    }
};