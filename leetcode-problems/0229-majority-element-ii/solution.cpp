class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

     //no use of normal hashing in majority element questions as negative numbers also exist

     int n = nums.size();

     map <int,int> mpp;

     for(int i = 0;i<n;i++){
        mpp[nums[i]]++ ;
     }

     int a = n/3;
     nums.clear();

     for(auto it : mpp){
        if(it.second > a){
            nums.emplace_back(it.first);
        }
     }
     return nums;




      
        
    }
};
