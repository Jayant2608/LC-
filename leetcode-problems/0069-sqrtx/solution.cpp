class Solution {
public:
    int mySqrt(int x) {

        //now using binary search 

        if(x == 0){
            return 0;
        }
        if(x == 1){
            return 1;
        }

        int low = 1;
        int high = x;
        long long mid;
        int ans = -1;


        while(low<=high){
            mid = (low + ((high -low)/2));
            

            if((mid*mid) <= x){
                low = mid+1;
                ans = mid;
            }

            else{
                high = mid-1;
            }

        }



return ans;
        
    }
};
