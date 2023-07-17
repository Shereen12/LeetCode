class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        for(int i = 0 ; i < magazine.size(); i++){
            mp[magazine[i]] += 1;
        }

        for(int i = 0 ; i < ransomNote.size(); i++){
            if(!mp[ransomNote[i]]){
                return false;
            }
            mp[ransomNote[i]] -= 1;
        }
        return true;
    }
};
