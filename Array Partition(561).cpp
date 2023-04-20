class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int j=0,k=0;
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>v;
        for(int i=0;i<nums.size();i++){
          if(i%2!=0 )
          v.push_back(nums[i]);
        }
        for(auto x:v){
          j=j+x;
        }

       
        return j;
    }
};
