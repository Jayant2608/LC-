class Solution {
public:
    int reverse(int x) {

        long long a = abs((long long)x);

        if(a == 0){
            return a;
        }

        
        long long rev = 0;
        while(a!=0){
            int rem = a%10;
            rev = (rev*10) + rem;
            a = a/10;

        }

        if(rev > INT_MAX){
            return 0;
        }

        if(rev < INT_MIN){
            return 0;
        }

        if(x <0){
            return (-1)*rev;
        }

        else{
            return rev;
        }

        
    }
};
