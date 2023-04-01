class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans,b;
        auto it=nums.end()-1;
        b=nums.size()-1;
        for(int x=0;x<nums.size();x++){
            if(nums[x]==target){
                return x;
                break;
            }
            else if(nums[x]>target){
                ans=x;
                return ans;
                break;
            }
            else if(*it<target){
                
                return b+1;
                break;
       }
               
        }
        return 0;
        
    }
};
