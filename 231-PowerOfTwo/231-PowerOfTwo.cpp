// Last updated: 27/02/2026, 23:02:40
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return 0; 
        return (n&(n-1))==0;
    }
};