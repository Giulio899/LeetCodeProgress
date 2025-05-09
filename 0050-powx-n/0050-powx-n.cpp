class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0f;
        while(n){
            if(n % 2){
                if(n <= 0) result /= x;
                else result *= x;
            }
            x *= x;
            n /= 2;
        }

        return result;
    }
};