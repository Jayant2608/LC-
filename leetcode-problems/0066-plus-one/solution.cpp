class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        if(digits[n-1] != 9){
            digits[n-1]+=1;
            return digits;
        }

        //if 9 is at last place

if((n==1) && (digits[0] == 9)){
    digits[0] = 0;
    digits.insert(digits.begin(),1);
    return digits;
}

        digits[n-1] = 0;

        

        for(int i = (n-2);i>=0;i--){
            if(digits[i] !=9){
                digits[i] += 1;
                return digits;
            }
            else{
                digits[i] = 0;
            }

            if(i == 0){
                digits.insert(digits.begin(),1);
                return digits;
            }

            
        }

     return {0};
    }

    
};
