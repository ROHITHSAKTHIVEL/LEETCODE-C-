class Solution {
public:
    int findMin(vector<int>& nums) {
       int x=0,min;
       min=nums[0];
       //x=*min_element(nums.begin(),nums.end());
       //return x;
       for(auto x:nums){
           if(x<min){
               min=x;
           }
           else
           continue;
           
       }
       return min; 
    }
    
};
