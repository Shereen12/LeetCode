class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                count += 1;
            }
            else if(count == 0){
                ans = nums[i - 1];
            }
            else{
                count = 0;
            }
        }
        if(count == 0){
            ans = nums[nums.size() - 1];
        }
        return ans;
    }
};
