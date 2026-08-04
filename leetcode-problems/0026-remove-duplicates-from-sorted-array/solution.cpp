class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

       

        int n = nums.size();
        int k = 1; //no of unique elements

        vector <int> v;
        v.emplace_back(nums[0]);


        for(int i = 0;i<(n-1);i++){
            if(nums[i+1]!=nums[i]){
                k+=1;
                v.emplace_back(nums[i+1]);
            }
        }
        
        
           int size = v.size();
        for(int i = 0;i<size;i++){
            nums[i] = v[i];
        }
        return k;

        //we need to modify the original vector only in regard to space complexity
    
    } 
};
