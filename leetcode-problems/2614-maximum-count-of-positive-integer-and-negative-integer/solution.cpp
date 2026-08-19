class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

//to find number of positive integers we take upperbound of target as 0
        int low = 0;
        int high = (n-1);
        int ans = n;


        int mid;
        while(low<=high){
            mid = (low+high)/2;

            if(nums[mid] > 0){
                ans = mid;
                high = mid -1;
            }
           else{
            low = mid + 1;
           }
        }

        int positive = n - ans;

          int ans1 = -1;
        low = 0;
        high = n-1;
        mid = 0;

        while(low<=high){
            mid = (low+high)/2;

            if(nums[mid]< 0){
                ans1 = mid;
                low = mid + 1;

            }
            else{
                high = mid - 1;
            }
        }

        int negative = ans1 +1;

       

        int result = max(positive,negative);
        return result;


     


    }
};
