class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        nums.clear();
        for(auto x:m){
            if(x.second==1){
                nums.push_back(x.first);
            }
        }
        return nums;
    }
};
