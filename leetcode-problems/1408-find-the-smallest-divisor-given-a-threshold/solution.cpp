class Solution {
public:

int fun(int mid,int n , vector<int>& nums){
    int sum = 0;
    int m;
    for(int i = 0;i<n;i++){
        m = (nums[i]+mid-1)/mid;
        sum += m;
        
    }

    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        int k;

        int mid;

        while(low<=high){
            mid = (low+high)/2;

            k = fun(mid,n,nums);

            if(k > threshold){
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid -1 ;
            }


        }
        return ans;
    }
};
