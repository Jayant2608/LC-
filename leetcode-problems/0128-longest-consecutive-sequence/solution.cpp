class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        vector <int> v;
        
        int a = 0;

        //nums is empty

        if(n ==0){
            return 0;
        }

        map <int,int> mpp;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        //copying keys of map in vector v

        for(auto it : mpp){
            v.emplace_back(it.first);
        }

        int m = v.size();
        for(int i = 0;i<(m-1);i++){
            if(abs(v[i+1]-v[i]) == 1){
                count++;

            }
            else{
                a = max(a,count);
                count = 1;
            }

        }
        a = max(a,count);
        
        return a;
      


        
    }
};
