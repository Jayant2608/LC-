class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        //two pointer approach

        int low = 0;
        int high = n-1;

        int area = 0;
        int m;

      while(low<=high){
        if(height[low]< height[high]){
            m = (high-low)*height[low];

            area = max(area,m);
            low++;

        }
        else{
            m = (high-low)*height[high];

            area = max(area,m);
            high -- ;
        }



      }

return area;
       
    }
};
