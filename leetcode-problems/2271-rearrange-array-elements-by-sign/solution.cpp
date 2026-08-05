class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> v1;
        vector <int> v2;
        int n = nums.size
();
        for(int i = 0;i<n;i++ ){
            if(nums[i]>=0){
                v1.emplace_back(nums[i]);
            }
            else{
                v2.emplace_back(nums[i]);
            }


        }

        //v1 has all +ve
        //v2 has all -ve
        vector <int> v3;

        int m = v1.size();
        for(int i = 0;i<m ;i++){
            v3.emplace_back(v1[i]);
            v3.emplace_back(v2[i]);

        }

        for(int i = 0;i<n;i++){
            nums[i] = v3[i];
        }

        return nums;
    }
};
