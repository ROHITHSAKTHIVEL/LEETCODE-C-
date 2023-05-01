class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        vector <int>l,v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(nums[i]);
            }
            else{
                l.push_back(nums[i]);
            }
        }
        for(int i=0;i<v.size();i++){
           l.push_back(v[i]);
        }
       

     return l;
    }
};
