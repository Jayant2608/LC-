class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;

        int n = nums.size();
        int count = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] != 0){
                v.emplace_back(nums[i]);
            }
            else{
                count +=1;
            }
        }

        for(int i = 0;i<count;i++){
            v.emplace_back(0);
        }

        for(int i = 0;i<n;i++){
            nums[i] = v[i];
        }

        for(int i = 0;i<n;i++){
            cout << nums[i];
        }
        
    }
};
