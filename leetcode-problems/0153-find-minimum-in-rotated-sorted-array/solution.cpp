class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int minvalue = nums[low];
        

        while(low<=high){
            mid = (low+high)/2;

            if(nums[mid]>=nums[low]){
                minvalue = min(minvalue,nums[low]);
                low = mid + 1;
            }
            else{
                minvalue = min(minvalue,nums[mid]);
                high = mid - 1;
            }
        }


return minvalue;
       
    }
};
