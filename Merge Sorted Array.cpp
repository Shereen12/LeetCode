class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        if(n == 0){
            for(int i = 0; i < m ; i++){
                ans.push_back(nums1[i]);
            }
        }
        else if(m == 0){
            for(int i = 0 ; i < n; i++){
                ans.push_back(nums2[i]);
            }
        }
        int a = 0, b = 0;
        while(a < m && b < n){
            if(nums1[a] <= nums2[b]){
                ans.push_back(nums1[a]);
                a++;
            }
            else if(nums2[b] < nums1[a]){
                ans.push_back(nums2[b]);
                b++;
            }
        }
        
        if(a < m){
            while(a < m){
                ans.push_back(nums1[a]);
                a++;
            }
        }
        
        while(b < n){
            ans.push_back(nums2[b]);
            b++;
        }
        
        for(int i = 0; i < m + n; i++){
            nums1[i] = ans[i];
        }
        
    }
};
