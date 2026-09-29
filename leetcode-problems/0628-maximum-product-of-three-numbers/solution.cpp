class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int a = 1;
        int count = 0;

        sort(nums.begin(),nums.end());
        for(int i = (n-1);i>=0;i--){
            a = a*nums[i];
            count++ ;

            if(count == 3){
                break;
            }
            
        }
        int b = nums[0]*nums[1];

        if((b*nums[n-1])> a){
            return b*nums[n-1];
        }
        return a;
        
    }
};
