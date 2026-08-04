class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();

       vector <int> v;

       for(int i = 0;i<(n-1);i++){
        for(int j = (i+1);j<n;j++ ){
            if((nums[i]+nums[j]) == target)
{
    v.emplace_back(j);
    v.emplace_back(i);
    break;

}        }
       }

       return v;

        }
 
};
