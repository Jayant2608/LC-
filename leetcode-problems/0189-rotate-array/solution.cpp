class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int w = n;
        int size = n;
       

        int r = k%n;
        int b,c1,d,c2;

       

            b = n-r;
            int c = b;
            
            for(int i = 0;i<b;i++){
                c1 = nums[i];

                nums[i] = nums[b-1];
                
                nums[b-1] = c1;
                b--;
            }

            for(int i = c;i<n;i++){
                d = nums[i];
                nums[i] = nums[n-1];
                nums[n-1] = d;
                n--;
            }

            for(int i = 0;i<w;i++){
                c2 = nums[i];
                nums[i] = nums[w-1];
                nums[w-1] = c2;
                w--;
            }

        

        //printing

        for(int i = 0;i<size;i++){
            cout<< nums[i];
        }
        
    }
};
