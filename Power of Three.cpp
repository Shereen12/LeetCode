class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1){
            return true;
        }
        if(n < 3){
            return false;
        }
        int ans = true;
        
        
        while(n % 3 == 0){
            n /= 3;
        }
        
        if(n != 1){
            ans = false;
        }
        
        return ans;
    }
};
