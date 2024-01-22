// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1)
            return 1;
        int p = n / 2;
        while(!isBadVersion(p)){
            if(((n - p) / 2) == 0)
                p++;
            else
                p = (n - p) / 2 + p;
        }

        while(isBadVersion(p)){
            p--;
        }
        
        return p + 1;
    }
};
