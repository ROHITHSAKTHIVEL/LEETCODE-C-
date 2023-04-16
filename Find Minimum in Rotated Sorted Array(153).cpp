class Solution {
public:
    int findMin(vector<int>& nums) {
        int x=0;
        x=*min_element(nums.begin(),nums.end());
        
        return x;
    }
};
