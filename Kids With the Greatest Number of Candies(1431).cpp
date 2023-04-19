class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> k;
      int c=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=c){
                k.push_back(1);

            }
            else {
                k.push_back(0);
            }
        }
        return k;
    }
};
