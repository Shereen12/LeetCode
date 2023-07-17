class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 1; i <= n ; i++){
            if(i % 3 == 0){
                if(i % 5 == 0){
                    ans.push_back("FizzBuzz");
                }
                else{
                    ans.push_back("Fizz");
                }
            }
            else if(i % 5 == 0){
                ans.push_back("Buzz");
            }
            else{
                string str = "";
                int k = i;
                while(k){
                    str += k % 10 + 48;
                    k /= 10;
                }
                reverse(str.begin(), str.end());
                ans.push_back(str);
            }

        }

        return ans;
    }
};
