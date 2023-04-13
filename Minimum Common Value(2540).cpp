class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map <int,int>m;
        set<int>k,t;
        for(auto x:nums1){
            k.insert(x);
        }
        for(auto x:nums2){
            t.insert(x);
        }
        for(auto x:k){
          m[x]++;
        }
        for(auto x:t){
          m[x]++;
        }
         for(auto x:m){
            if(x.second>1){
                return x.first;
            }
        } 



        
          /* for(auto j:k){
              
                   nums2.push_back(j);
   
           }

        
        for(auto x:nums2){
            m[x]++;
        }
        for(auto x:m){
            if(x.second>1){
                return x.first;
            }
        } */
        return -1;
    }
};
