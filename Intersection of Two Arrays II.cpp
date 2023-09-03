class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int freq1[2000] = {0};
        int freq2[2000] = {0};
        for(int i = 0 ; i < nums1.size(); i++){

            freq1[nums1[i]] += 1;
        }
        for(int i = 0 ; i < nums2.size(); i++){
            freq2[nums2[i]] += 1;
        }
        vector<int> ans;
        for(int i = 0 ; i <= 1000; i++){
            if(freq1[i] > 0 && freq2[i] > 0){
                cout << freq1[i] + freq2[i] << endl;
                for(int j = 0; j < min(freq1[i], freq2[i]); j++)
                    ans.push_back(i);
            }
        }
        
        return ans;
    }
};
