class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0;
        int low1 = 0;
        int high = n-1;
        int high1 = n-1;

        int mid,mid1;

        int ans = 0;
        int ans1 = 0;

       

        if(n == 0){
           return {-1,-1};
        }


        else if((target > nums[n-1]) || (target < nums[0])){
           return {-1,-1};
        }

        while(low<=high){
            mid = (low+high)/2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }

            else{
                low = mid + 1;
            }
        }

        if(nums[ans]!= target){ //to counter 2nd example(testcase)
           return {-1,-1};
        }

        while(low1<=high1){
            mid1 = (low1 + high1)/2;

            if(nums[mid1] <= target){
                ans1 = mid1;
                low1 = mid1 + 1;
            }

            else{
                high1 = mid1 -1 ;
            }

        }
      


        return {ans,ans1};












        
    }
};
