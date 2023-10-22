class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[200] = {0};
        for(int i = 0; i < s.size(); i++){
            f[s[i]] += 1;
        }
        if(t.size() < s.size()){
            return false;
        }
        for(int i = 0 ; i < t.size(); i++){
            f[t[i]] -= 1;     
        }
        
        for(int i = 0; i < 200 ; i++){
            if(f[i] != 0){
                return false;
            }
        }
        return true;
    }
};
