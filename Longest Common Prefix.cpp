class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string t = strs[0];
        
        for(int i = 1; i < strs.size(); i++){
            string f = "";
            int m = 0;
            for(int k = 0 ; k < strs[i].size(); k++){
                if(strs[i][k] != t[m]){
                    break;
                }
                else{
                    f += strs[i][k];
                }
                m += 1;
            }
            t = f;
        }
        
        return t;
    }
    
};
