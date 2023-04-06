class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        float v=0;
      set<float>l;
      sort(nums.begin(),nums.end());
      for(int x=0,n=nums.size()-1;x<nums.size()/2;x++,n--) {
         v=(float)(nums[x]+nums[n])/2;
        l.insert(v);
      } 
        return l.size();   
    }
};
