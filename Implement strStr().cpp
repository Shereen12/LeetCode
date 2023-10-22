class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        for(int i = 0; i < haystack.size(); i++){
            ans = i;
            int k = i;
            for(int j = 0 ; j < needle.size(); j++){
                if(haystack[k] != needle[j]){
                    ans = -1;
                    break;
                }
                k += 1;
            }
            if(ans != -1){
                return ans;
            }
        }
        return -1;
    }
};
