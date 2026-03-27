class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0){
            return true;
        }
        if(x<0){
            
            return false;
        }
        else{
            long long rev = 0;
            int a = x;
            while(x!=0){
                int rem = x%10;
                rev = rev*10 + rem;
                x = x/10;
            }
            if(rev >INT_MAX){
                return false;
            }
            else{
                if(rev == a){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
};
