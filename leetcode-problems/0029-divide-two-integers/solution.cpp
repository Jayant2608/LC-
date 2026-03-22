class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor){
            return 1;
        }
        int sign = true;
        if((dividend >= 0) &&(divisor<0)){
            sign = false;
        }

        if((dividend<=0) && (divisor>0)){
            sign = false; // why right shift operator is not used
        }

         long long n = abs((long long)dividend);  // long long should be used to avoid any kind of overflows
         long long d = abs((long long)divisor); // casting of dividend and divisor to long long to avoid overflow

         long long ans = 0;

        while(n>=d){
            long long count = 0;
            while(n>=(d<<(count +1))){
                count ++;
            }
            ans = ans + (1LL<<count);
            n = n-(d*(1LL<<count));

        }

        if(ans >= (pow(2,31))&& (sign == true)){
            return INT_MAX;}

         if(ans >= (pow(2,31))&& (sign == false)){
            return INT_MIN;}

        return sign ? ans : ((-1)*ans);

    }
};
