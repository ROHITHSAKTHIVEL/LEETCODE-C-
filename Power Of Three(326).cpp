class Solution {
public:
    bool isPowerOfThree(int n) {
        long int ans=1;
        if(n==1)
        return true;
        for( int i=0;i<=n;i+3){
            ans=ans*3;
            if(ans==n){
                return true;
            

            }
            if(ans>n){
                break;
            }
            
        }
        return false;
        
    }
};
