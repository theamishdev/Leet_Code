class Solution {
public:
    int concatenatedBinary(int n) {
       int mod=pow(10,9)+7;
       long long int ans=0;
    
    for(int i=1;i<=n;i++){
        int k=i;
        int count=0;
        while(k>0){
            k/=2;
            count++;
        }
        ans=((ans<<count)+i)%mod;
    }
    return ans;
}
};