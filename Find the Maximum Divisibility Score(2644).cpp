class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxcount=INT_MIN;
        int num=0;
        for(int i=0;i<divisors.size();i++){
            int a=0;
            for(auto x:nums){
               if(x % divisors[i]==0){
                   a++;
               }
            }
            if(a>=maxcount)
            {
                if(a==maxcount)
                {
               num=min(num,divisors[i]);
                }
                else
                num=divisors[i];
                maxcount=a;
            } 
        }
    
    
        return num;
    }
};
