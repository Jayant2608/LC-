class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int occur= n/2;

        unordered_map <int,int> hash;

        for(int i = 0;i<n;i++){
            hash[nums[i]] ++; 
        }

       for(auto it : hash){
        if(it.second > occur){
            return it.first;
        }
       }

      return 0;
        
    }
};
