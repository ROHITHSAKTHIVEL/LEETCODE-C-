class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int ans=1;
        if(n==1)
        return true;
        for( int i=0;i<=n;i+2){
            ans=ans*2;
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
