class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        vector<int> v;

        for(int i = 0;i<n;i++){
            if(nums[i]== 1){
                c +=1;
            }
            else{
                v.emplace_back(c);
                c = 0;
            }
        }
        v.emplace_back(c);

        int m = v.size();
        int large = v[0];
        for(int i = 0;i<(m);i++){
            if(v[i]>large){
                large = v[i];

            }
        }

        return large;
        

      
    }
};
