class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if(x<0){
            sign=-1;
             if (x<INT_MAX*(-1)) return 0;
            x *= -1;
        }

        int res=0;
        do{
            if (res>INT_MAX/10 || res<INT_MIN/10) return 0;
            res *= 10;
            res+=x%10;
            x=(x-(x%10))/10;
        }while(x>0);
        return res * sign;
    }
};