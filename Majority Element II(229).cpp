class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int,int>m;
        vector<int>r;
        int n=nums.size();
        for(auto x:nums){
            m[x]++;
        }
        n=n/3; 
        
        for(auto p:m){
         if(p.second>n)
         {   
            r.push_back(p.first);  
         }
        
        }
        
        return r;
    }
};
