class Solution {
public:

int sum(int mid,int n, vector<int>& arr){
    int s = 0;
    int re = 0;
    
    for(int i= 0;i<n;i++){
        if(arr[i]<=mid){
            s++ ;
        }
        else{
            re ++ ;
        }
        

    }
    int g = n- re;
    int y = mid - g;
    return y ;
}
    int findKthPositive(vector<int>& arr, int k) {



        int n = arr.size();
        int low = 1;
        int max = *max_element(arr.begin(),arr.end());

        int high = max + k;
        int mid;
        int r;

        while(low<=high){
            mid = (low+high)/2;
            r = sum(mid,n,arr);
      

            if(r < k){
                low = mid + 1;
            }

            else{ high = mid - 1;}

        }
        return low;
    }
};
