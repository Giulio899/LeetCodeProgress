class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) return 0;
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MAX && divisor == -1) return INT_MIN+1;
        if (divisor == 1) return dividend;
        bool neg = false;
        if(dividend < 0 || divisor < 0){
            if(dividend < 0 && divisor > 0){
                divisor = divisor - divisor - divisor;
                neg = true;
            }
            else if(dividend > 0 && divisor < 0){
                neg = true;
                dividend = dividend - dividend - dividend;
            }
        }

        int res = dividend;
        int count = 0;

        if(dividend > 0){
            while(res - divisor >= 0){
                res -= divisor;
                neg ? count-- : count++;
            }
        }else{
            while(res - divisor <= 0){
                res -= divisor;
                neg ? count-- : count++;
            }
        }

        return count;
    }
};