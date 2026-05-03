class Solution {
public:
    int solve(int n){
        if(n==0)return 0;
        int rem=solve(n/10);
        int d_c;
        int d=n%10;
        if(d==0 || d==1 || d==8)d_c=0;  //same value
        else if(d==2 || d==5 || d==6 || d==9)d_c=1;
        else return 2;

        if(rem==2)return 2;
        if(rem==0 && d_c==0)return 0;
        return 1;
    }
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(solve(i)==1)count++;
        }
        return count;
    }
};