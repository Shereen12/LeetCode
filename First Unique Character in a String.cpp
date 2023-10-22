class Solution {
public:
    int firstUniqChar(string s) {
        int f[200] = {0};
        for(int i = 0 ; i < s.size(); i++){
            f[s[i]] += 1;
        }
        
        for(int i = 0 ; i < s.size(); i++){
            if(f[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
