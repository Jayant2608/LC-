class Solution {
public:

int fun(int mid,int n ,vector<int>&weights){
    //mid is weight capacity

    int d = 1;

    int sum = 0;
    for(int i = 0;i<n;i++){

        

        if(sum + weights[i]<=mid){ //mid is 4
            sum += weights[i];
        }
       
       
        else{
            sum = weights[i];
            
            d ++ ;
        }

    }
    return d;

}

    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());
        //maximum capacity is sum of all weights 

        int high = accumulate(weights.begin(),weights.end(),0); // sum of all elements of vector using accumulate function

        int mid ;
        int ans = -1;

        while(low<=high){
            mid = (low+high)/2;
            int m = fun(mid,n,weights);

            if(m<=days){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }





        }
   return ans;
        
    }
};
