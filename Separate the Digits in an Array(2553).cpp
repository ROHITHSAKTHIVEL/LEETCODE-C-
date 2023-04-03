class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        int m=0,n=0;
        for(int x=nums.size()-1;x>=0;x--){
         
             int n=nums[x];
             while(n!=0){
               m=n%10;
               v.push_back(m);
               n=n/10;
          
         }
        }
        reverse(v.begin(),v.end());
        return {v};
    
    }
};
