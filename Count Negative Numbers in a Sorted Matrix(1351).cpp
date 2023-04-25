class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
       for(int j=0;j<grid.size();j++){
           for(int i=0;i<grid[j].size();i++){
                if(grid[j][i]<0){
                 count++;
               }
           }
       } 
       return count;
    }
};
