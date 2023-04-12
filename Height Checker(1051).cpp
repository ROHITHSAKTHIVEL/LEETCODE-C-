class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int k=0,m=0,count=0;
        vector<int>v;
        for(auto x:heights){
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(i==j){
                    if(heights[i]!=v[j]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
