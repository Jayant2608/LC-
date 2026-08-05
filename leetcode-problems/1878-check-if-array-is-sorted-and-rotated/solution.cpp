class Solution {
public:
    bool check(vector<int>& nums) {
        int a = nums.size();
        int min = nums[0];
        int min_index = 0;
        

//finding minimum number and its index

        for(int i = 0;i<a;i++){
            if(nums[i]<min){
                 min_index = i;
                min = nums[i];

            }
        }
       for(int i = (a-1);i>=0;i--)
{
    if(nums[i] == min){
        min_index = i;
    }
    else{
        break;
    }
}
     

        vector <int> v;
        for(int i = min_index;i<a;i++){
            v.emplace_back(nums[i]);
        }



        for(int i = 0;i<min_index;i++){
            v.emplace_back(nums[i]);
        }

        //now checking if vector is sorted or not

        for(int i = 0;i<(a-1);i++){
            if(v[i+1]>=v[i]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;



       
    }
    
};
