class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int sum2 = 0;

        

        int n = nums.size();
        for(int i = 0;i<n;i++){
            sum += nums[i]; //element sum
        }


        for(int i = 0;i<n;i++){
            if(nums[i]<=9){
                sum2 += nums[i];
            }
            else{
                while(nums[i]> 0){
                    int b = nums[i]%10;
                    sum2 += b;
                    nums[i] = nums[i]/10;
                }

            }

        }

        return abs(sum2 - sum);


        
    }
};
