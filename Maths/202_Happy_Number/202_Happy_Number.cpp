class Solution {
public:
    int f(int n){
        int sum = 0;
        while(n){
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n, fast = f(n);

        while(fast != 1 && slow != fast){
            slow = f(slow);
            fast = f(f(fast));
        }

        return fast == 1;
    }
};
