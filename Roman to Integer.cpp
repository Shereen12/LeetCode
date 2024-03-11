class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0 ; i < s.size() ; i++){
            cout << s[i] << endl;
            if(s[i] == 'I' && s[i + 1] == 'V'){
                ans += mp['V'] - mp['I'];
                i += 1;
            }
            else if(s[i] == 'I' && s[i + 1] == 'X'){
                ans += mp['X'] - mp['I'];
                i += 1;
            }
            else if(s[i] == 'X' && s[i + 1] == 'L'){
                ans += mp['L'] - mp['X'];
                i += 1;
            }
            else if(s[i] == 'X' && s[i + 1] == 'C'){
                ans += mp['C'] - mp['X'];
                i += 1;
            }
            else if(s[i] == 'C' && s[i + 1] == 'D'){
                ans += mp['D'] - mp['C'];
                i += 1;
            }
            else if(s[i] == 'C' && s[i + 1] == 'M'){
                ans += mp['M'] - mp['C'];
                i += 1;
            }
            else{
                ans += mp[s[i]];
            }
        }
        
        return ans;
    }
};
