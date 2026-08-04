class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int d = nums.size();

        // most optimised code for this using XOR operator 
        int count = 0;
        for(int i = 0;i<d;i++){
            count = count^nums[i];

        }
        return count;
        
    }
};
