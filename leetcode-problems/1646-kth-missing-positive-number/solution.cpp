class Solution {
public:

   int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mid;
        int missing;

        while(low<=high){
            mid = (low+high)/2;
            missing = arr[mid]-(mid+1);

            if(missing < k){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
                  

        }
          //now high and low point to numbers that have kth missing number in between them with high before low i.e low = high + 1


       // int a = arr[high] -(high + 1); show that itne missing numbers ho chuke hai
       // int more = k-a
       //int ans = arr[high] + more
       //        = arr[high] + k - a
       //        = arr[high] + k - (arr[high] -(high + 1)) 
       //        = k + high + 1 
       //        = k + low

       // we could write the first line but high can be -1 so arr[high] will give an error

       return (k + high + 1);

    }
};
