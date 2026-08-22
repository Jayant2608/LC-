class Solution {
public:
    int addDigits(int num) {
        
        if(num <=9){
            return num;
        }

        int s = 10;
        int sum = 0;
        
        while(s >= 10){
            

            int a = num%10;
            sum += a;
            num = num/10;

            if(num == 0){
                num = sum;
                s = sum;
                sum = 0;
            
            }
        }
        return num;
    }
};
