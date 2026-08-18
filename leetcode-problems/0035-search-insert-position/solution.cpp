class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

//asking to give lowerbound only 

        int low = 0;
        int high = n-1;
        int mid ;
        int ans = n;

        while(low <= high){
            mid = (high +low)/2;
           
           if(nums[mid]>= target){
            ans = mid;
            high = mid-1;
           }

           else{
            low = mid + 1;
           }

            
        }
        return ans;



        
    }
};
