class Solution {
public:

int digits(int k){

int count = 0;
    while(k>0){
        k = k/10;
        count++;

    }
    return count;

    

}
    bool isHappy(int n) {

       
int sum = 0;

set<int> p;

p.insert(n);
int count = 1;


while(sum != 1){
    if(sum != 0){
        n = sum;
        p.insert(n);
        count ++;

        if(p.size() != count){
            return false; //infinte loop
        }


    }
        int a = digits(n);
       

        vector<int> v;

        while(n>0){
            int q = n%10;

            v.emplace_back(q);
            n = n/10;


        }
int s = 0;
        for(int i = 0;i<a;i++){
            s = s + (v[i]*v[i]);

        }
        v.clear();
        sum = s;

}
      return true;
    
   
    }
};
