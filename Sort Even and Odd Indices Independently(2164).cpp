class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>v;
        vector<int>m;
        int k=nums.size();
      for(int i=0;i<k;i++){
          if( i%2!=0){
             m.push_back(nums[i]); 
          }
          else{
              v.push_back(nums[i]);
          }
      }
      nums.clear();
      sort(v.begin(), v.end());
      sort(m.begin(), m.end(), greater<int>());
      int a=0;
      int b=0;
      
      for(int i=0;i<k;i++){
         
           if(i%2!=0){
              nums.push_back(m[a]);
              a++;
          }
          
            else{
                
                nums.push_back(v[b]);
                b++;
              }
          }
           
      return {nums}; 
    }
};
