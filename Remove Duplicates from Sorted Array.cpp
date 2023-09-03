class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = nums[0];
        int k = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == current){
                nums.erase(nums.begin() + i);
                i -= 1;
            }
            else{
                current = nums[i];
                k += 1;
            }
        }

        return k;
    }
};
