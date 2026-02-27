class Solution {
public:
    int divide(int dividend, int divisor) {
        long long result=0;
        long long n=dividend;
        if(n<0)n*=-1;
        long long div=divisor;
        if(div<0)div*=-1;
        while(n>=div)
        {
            long long count=0;
            while(n>=(div<<(count+1)))
            {
                count++;
            }
            result+=(1LL<<count);
            n-=(div<<count);
        }
        if((dividend>=0&&divisor>0)||(dividend<=0&&divisor<0))
        {
            if(result>INT_MAX)return INT_MAX;
            return result;
        }
        if(result<INT_MIN)return INT_MIN;
        return -result;
    }
};
