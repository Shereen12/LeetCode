class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                t += s[i] + 32;
            }
            else if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)){
                t += s[i];
            }
        }
        
        cout << t << endl;
        
        int k = t.size() - 1;
        for(int i = 0; i < t.size() / 2; i++){
            if(t[i] != t[k]){
                return false;
            }
            k--;
        }
        
        return true;
    }
};
