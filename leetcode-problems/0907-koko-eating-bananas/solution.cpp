class Solution {
public:

long long fun(int a,int n,vector<int>& piles){
    long long b = 0; //PREVENTING INTEGER OVERFLOW
    

    for(int i = 0;i<n;i++){
        //using the ceil function

      b += ((piles[i]+a-1)/a); //INstead of using ceil function we do ((x+y-1)/y) to prevent precision error

    }
       return b;
}
    int minEatingSpeed(vector<int>& piles, int h) {

        //k can range from 1 to max element of the piles vector
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = -1;
        long long p;

        int n = piles.size();

        int mid;

        while(low<=high){
            mid =  low + ((high - low)/2); 
             p = fun(mid,n,piles);

            if(p<=h){
                ans = mid;

                high = mid-1;
            }

            else{
                low = mid +1 ;
            }


        }


        return ans;
        
    }
};
