class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;
        double ans = 1;

        if(p < 0){
            x = 1/x;
            p = -p;
        }

        while(p != 0){
            if(p & 1) ans *= x;
            x *= x;
            p >>= 1;
        }
        return ans;
    }
};
