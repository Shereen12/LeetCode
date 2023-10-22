class Solution {
public:
    int reverse(long long x) {
        long long ans = 0;
        bool neg = false;
        if(x < 0){
            neg = true;
            x *= -1;
        }
        while(x){
            if(ans * 10 > INT_MAX)
                return 0;
            ans *= 10;
            ans += x % 10;
            x /= 10;
        }
        if(neg){
            ans *= -1;
        }
        
        if(x > INT_MAX){
            ans = 0;
        }
        if(x < INT_MIN){
            ans = 0;
        }
        
        return ans;
    }
};
