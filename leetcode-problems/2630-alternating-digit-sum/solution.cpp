class Solution {
public:
    int alternateDigitSum(int n) {

int sum =0;
int a = n;
int digits = 0;
int i = 0;

        //calculating digits
        while(n>0){
            n = n/10;
            digits++ ;

        }

        if((digits%2) == 0){
            while(a> 0){
                int b = a%10;
                a = a/10;
                i++;
                if((i%2) != 0){
                    sum = sum -b;
                }
                else{
                    sum += b;
                }


            }
            return sum;



        }

        while(a> 0){
            int b = a%10;

            a = a/10;
            i++;

            if((i%2) != 0){
                sum += b;
            }
            else{
                sum -= b;
            }
        }
        return sum;
        
    }
};
