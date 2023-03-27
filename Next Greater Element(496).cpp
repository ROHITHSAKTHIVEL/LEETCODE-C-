class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int count=0,ans=0;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans++;}
                    if(ans==1){
                        if(nums1[i]<nums2[j]){
                            v.push_back(nums2[j]);
                        count++;  
                        
                        ans=0;
                    }

                    }
                    
                   
                }
                 if(count==0){
                        v.push_back(-1);
                    }
                    count =0;
                    ans=0;
            
        }
        return v;
    }
};
