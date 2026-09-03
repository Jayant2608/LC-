class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;

        int mid ;
        int b;

        if(n==1){
            return nums[0];
        }

        while(low<=high){
            if(low == high){
                return nums[low];
            }
            mid = (low+high)/2;
            if(nums[mid] == nums[mid+1]){
                nums.erase(nums.begin() + mid,nums.begin()+ (mid+2));
                low = 0;
                high = high -2;
                continue;
            }

            else if(nums[mid] == nums[mid-1]){
                nums.erase(nums.begin() + (mid-1),nums.begin()+ (mid+1));
                low = 0;
                high = high -2;
                continue;
            }
            else{
                 b = nums[mid];
                break;
            }


        }
return b;

        

        
    }
};
