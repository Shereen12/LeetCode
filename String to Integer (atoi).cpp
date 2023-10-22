class Solution {
public:
    int myAtoi(string s) {
        long long n = 0;
        bool neg = false;
        bool digit = false;
        bool sign = false;
        int count = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '-' && !sign && !digit){
                neg = !neg;
                sign = true;
            }
            else if(s[i] == '+' && !sign && !digit){
                sign = true;
            }
            else if(s[i] >= '0' && s[i] <= '9' && count <= 11){
                n *= 10;
                n += s[i] - 48;
                digit = true;
                if(n > 0)
                    count += 1;
            }
            else if(digit || sign){
                break;
            }
            else if(s[i] != ' '){
                break;
            }
        }
        
        if(neg){
            n *= -1;
        }
     
        cout << n << endl;
        if(n > INT_MAX){
            n = INT_MAX;
        }
        if(n < INT_MIN){
            n = INT_MIN;
        }

       
        
        
        return n;
    }
};
